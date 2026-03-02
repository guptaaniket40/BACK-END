import os
import tkinter as tk
from tkinter import messagebox, Listbox, END

# -------------------------
# User Class
# -------------------------
class User:
    def __init__(self, name):
        self.name = name


# -------------------------
# Post Class
# -------------------------
class Post:
    def __init__(self, user, title, content):
        self.user = user
        self.title = title
        self.content = content

    def save_post(self):
        """Save post into a text file with format username_title.txt"""
        try:
            if not os.path.exists("posts"):
                os.makedirs("posts")

            filename = f"posts/{self.user.name}_{self.title}.txt"
            with open(filename, "w") as file:
                file.write(f"Author: {self.user.name}\n")
                file.write(f"Title: {self.title}\n\n")
                file.write(self.content)

            messagebox.showinfo("Success", "Post Saved Successfully!")

        except Exception as e:
            messagebox.showerror("Error", f"Could not save post.\n{e}")


# -------------------------
# Main Application Class
# -------------------------
class MiniBlogApp:
    def __init__(self, root):
        self.root = root
        self.root.title("MiniBlog Application")
        self.root.geometry("600x500")

        # ------------------- Input Fields -------------------
        tk.Label(root, text="Your Name:", font=("Arial", 12)).pack()
        self.name_entry = tk.Entry(root, width=40)
        self.name_entry.pack()

        tk.Label(root, text="Post Title:", font=("Arial", 12)).pack()
        self.title_entry = tk.Entry(root, width=40)
        self.title_entry.pack()

        tk.Label(root, text="Post Content:", font=("Arial", 12)).pack()
        self.content_text = tk.Text(root, width=60, height=10)
        self.content_text.pack()

        tk.Button(root, text="Save Post", command=self.save_post, bg="lightgreen").pack(pady=5)

        # ------------------- View Posts Section -------------------
        tk.Label(root, text="View Saved Posts", font=("Arial", 12)).pack(pady=10)

        self.post_listbox = Listbox(root, width=50)
        self.post_listbox.pack()

        tk.Button(root, text="Load Posts", command=self.load_posts, bg="lightblue").pack(pady=5)
        tk.Button(root, text="View Selected Post", command=self.view_post, bg="orange").pack(pady=5)

        self.display_area = tk.Text(root, width=60, height=10)
        self.display_area.pack()

    # ------------------- Functions -------------------
    def save_post(self):
        name = self.name_entry.get().strip()
        title = self.title_entry.get().strip()
        content = self.content_text.get("1.0", END).strip()

        if not name or not title or not content:
            messagebox.showwarning("Warning", "All fields are required!")
            return

        user = User(name)
        post = Post(user, title, content)
        post.save_post()

        self.name_entry.delete(0, END)
        self.title_entry.delete(0, END)
        self.content_text.delete("1.0", END)

    def load_posts(self):
        """Load all saved post files into the listbox"""
        self.post_listbox.delete(0, END)
        try:
            files = os.listdir("posts")
            for file in files:
                if file.endswith(".txt"):
                    self.post_listbox.insert(END, file)
        except FileNotFoundError:
            messagebox.showerror("Error", "No posts folder found!")

    def view_post(self):
        """View selected post content"""
        try:
            selected = self.post_listbox.get(self.post_listbox.curselection())
            filepath = f"posts/{selected}"

            with open(filepath, "r") as file:
                content = file.read()

            self.display_area.delete("1.0", END)
            self.display_area.insert(END, content)

        except:
            messagebox.showwarning("Warning", "Please select a post to view!")


# -------------------------
# Run Application
# -------------------------
root = tk.Tk()
app = MiniBlogApp(root)
root.mainloop()
