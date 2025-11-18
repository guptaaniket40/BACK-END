import datetime

# -----------------------------
# Global Data Storage
# -----------------------------
inventory = {
    "Paracetamol": {"quantity": 50, "price": 10},
    "Ibuprofen": {"quantity": 30, "price": 15},
    "Amoxicillin": {"quantity": 20, "price": 25}
}

sales_records = []

# -----------------------------
# Function: View Inventory
# -----------------------------
def view_inventory():
    print("\n---- Current Inventory ----")
    print(f"{'Medicine':15} {'Quantity':10} {'Price/unit':10}")
    print("-" * 40)
    for med, info in inventory.items():
        print(f"{med:15} {info['quantity']:10} {info['price']:10}")
    print("-" * 40)

# -----------------------------
# Function: Add or Update Medicine
# -----------------------------
def add_update_medicine():
    med_name = input("Enter medicine name: ").title()
    try:
        quantity = int(input("Enter quantity: "))
        price = float(input("Enter price per unit: "))
        if med_name in inventory:
            inventory[med_name]['quantity'] += quantity
            inventory[med_name]['price'] = price
            print(f"{med_name} stock updated successfully!")
        else:
            inventory[med_name] = {"quantity": quantity, "price": price}
            print(f"{med_name} added to inventory!")
    except ValueError:
        print("Invalid input! Quantity should be an integer and price should be a number.")

# -----------------------------
# Function: Process Sale
# -----------------------------
def process_sale():
    customer_name = input("Enter customer name: ").title()
    medicine_name = input("Enter medicine name: ").title()

    if medicine_name not in inventory:
        print("Medicine not found in inventory!")
        return
    
    try:
        quantity = int(input("Enter quantity to purchase: "))
    except ValueError:
        print("Invalid quantity!")
        return
    
    if quantity > inventory[medicine_name]['quantity']:
        print(f"Insufficient stock! Available quantity: {inventory[medicine_name]['quantity']}")
        return
    
    # Calculate total
    total_price = quantity * inventory[medicine_name]['price']
    
    # Update inventory
    inventory[medicine_name]['quantity'] -= quantity
    
    # Record the sale
    sale_record = {
        "customer": customer_name,
        "medicine": medicine_name,
        "quantity": quantity,
        "total_price": total_price,
        "date": datetime.datetime.now().strftime("%Y-%m-%d %H:%M:%S")
    }
    sales_records.append(sale_record)
    
    # Print bill
    print("\n---- Sale Receipt ----")
    print(f"Customer: {customer_name}")
    print(f"Medicine: {medicine_name}")
    print(f"Quantity: {quantity}")
    print(f"Total Price: Rs {total_price}")
    print(f"Date: {sale_record['date']}")
    print("-" * 30)

# -----------------------------
# Function: View Sales Records
# -----------------------------
def view_sales():
    if not sales_records:
        print("No sales recorded yet.")
        return
    
    print("\n---- Sales Records ----")
    for sale in sales_records:
        print(f"{sale['date']} | {sale['customer']} | {sale['medicine']} | Qty: {sale['quantity']} | Total: Rs {sale['total_price']}")

# -----------------------------
# Main Menu
# -----------------------------
def main_menu():
    while True:
        print("\n===== MediTrack Pharmacy =====")
        print("1. View Inventory")
        print("2. Add/Update Medicine")
        print("3. Process Sale")
        print("4. View Sales Records")
        print("5. Exit")
        
        choice = input("Enter your choice: ")
        
        if choice == "1":
            view_inventory()
        elif choice == "2":
            add_update_medicine()
        elif choice == "3":
            process_sale()
        elif choice == "4":
            view_sales()
        elif choice == "5":
            print("Exiting MediTrack. Have a good day!")
            break
        else:
            print("Invalid choice! Please select a valid option.")

# -----------------------------
# Start the application
# -----------------------------
if __name__ == "__main__":
    main_menu()
