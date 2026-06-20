# 🎓 Student Management System

> A console-based C++ application that uses a **Singly Linked List** to manage student records — built as part of a Data Structures course project.

---

## 📖 About The Project

This project implements a **Student Management System** from scratch in C++, relying entirely on a custom-built singly linked list (no STL containers). Each node in the list stores a full student profile including ID, name, age, GPA, and grades.

The system presents an interactive console menu that allows the user to add, delete, search, update, display, and sort student records. The project also includes a university course catalog modeled as structured JSON files, covering General CS, Artificial Intelligence, and Software Engineering tracks.

---

## ✨ Features

- 📋 **Menu-driven interface** with 7 operations
- ➕ **Insert** students at the beginning or end of the list
- ❌ **Delete** students from the beginning or end of the list
- 🔍 **Search** for a student by record
- ✏️ **Update** student information
- 📊 **Display** all student records in a formatted table
- 🔃 **Sort** students by criteria
- 📁 **Course catalog** in JSON format (CS, AI, and SE specializations)

---

## 🛠️ Built With

| Technology | Purpose |
|---|---|
| C++ | Core application language |
| Structs & Pointers | Student node definition |
| Singly Linked List | Primary data structure |
| Dynamic Memory (`new`/`delete`) | Heap-based node management |
| JSON | University course catalog data |
| CodeBlocks IDE | Development environment |

---

## 🚀 Getting Started

### Prerequisites

- A C++ compiler (GCC, MinGW, or Clang)
- CodeBlocks IDE *(recommended)* **or** any terminal with `g++`

### Installation & Run

**Option 1 — Using CodeBlocks:**

1. Clone the repository:
   ```bash
   git clone https://github.com/temsah-dev/Student-Management-System.git
   ```
2. Open `Student Management System.cbp` in CodeBlocks
3. Press **Build & Run** (F9)

**Option 2 — Using the terminal:**

```bash
git clone https://github.com/temsah-dev/Student-Management-System.git
cd Student-Management-System
g++ main.cpp -o student_system
./student_system
```

---

## 📁 Project Structure

```
Student-Management-System/
│
├── main.cpp                     # Main application logic & LinkedList class
├── Student.h                    # Student struct & LinkedList class declarations
├── Student.cpp                  # (Reserved for future implementation)
│
├── courses.json                 # General CS course catalog
├── courses - Ai.json            # AI specialization course catalog
├── courses - Se.json            # Software Engineering course catalog
│
└── Student Management System.cbp   # CodeBlocks project file
```

---

## 💡 What I Learned

- How to implement a **singly linked list** from scratch using structs and pointers
- Managing **dynamic memory** with `new` and `delete` in C++
- Designing **modular, menu-driven** console applications
- Separating class declarations (`.h`) from implementation (`.cpp`)
- Structuring real-world relational data using **JSON**

---

## 🤝 Contributing

Contributions are welcome! If you'd like to improve this project:

1. Fork the repository
2. Create a new branch: `git checkout -b feature/your-feature`
3. Commit your changes: `git commit -m "Add your feature"`
4. Push to the branch: `git push origin feature/your-feature`
5. Open a Pull Request

---

## 📄 License

Distributed under the MIT License. See `LICENSE` for more information.

---

## 👤 Author

**Abdou Temsah**

- GitHub: [@temsah-dev](https://github.com/temsah-dev)

---

*Built with 💙 as a Data Structures course project*
