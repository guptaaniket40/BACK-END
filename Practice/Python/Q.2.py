sname = "ANIKET"
sage = 21
marks_obtained = 85
total_marks = 100

percentage = (marks_obtained / total_marks) * 100

def display_student_details():
    """Function to display student details."""
    print("Student Details:")
    print(f"Name       : {sname}")
    print(f"Age        : {sage}")
    print(f"Percentage : {percentage:.2f}%") 


if __name__ == "__main__": 
    display_student_details()
