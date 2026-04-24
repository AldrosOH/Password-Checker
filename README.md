# Password Checker
<p align="center"> A simple C++ CLI project to validate password strength 💻 </p> <p align="center"> <img src="https://img.shields.io/badge/Language-C++-blue?style=for-the-badge"> <img src="https://img.shields.io/badge/Level-Beginner-green?style=for-the-badge"> <img src="https://img.shields.io/badge/Status-Completed-brightgreen?style=for-the-badge"> </p>
📌 Project Overview

- This is a beginner-friendly C++ project that checks whether a password meets basic security requirements.
- The program keeps asking for input until a valid password is entered.

  
🚀 Features
- ✔️ Minimum 8 characters
- ✔️ At least 1 special character
- ✔️ At least 1 number
- ✔️ Continuous validation loop
- ✔️ Clean terminal interface

⚙️ How It Works

The password must satisfy:

-  Length ≥ 8
-  Contains special characters:
  `@#$%&)(~^*+_-=``
-  Contains digits: 0–9

🛠️ Setup & Run

🔹 Compile
```
g++ main.cpp -o password_checker
```
🔹 Run
```
./password_checker
```
🖥️ Example Output
```
===================
Password Checker
===================

Enter your password: hello
Invalid password. Password has less than 8 char
Try Again: hello123
Use special Characters in your password
Try Again: hello@123
You passed
```
📚 What I Learned
- std::string usage
- .length() and .find_first_of()
- Loop logic with multiple conditions
- CLI input/output handling

⚠️ Known Issues
- Number-checking logic can be improved
- Doesn’t support spaces in passwords
- No uppercase/lowercase validation

💡 Future Improvements
- Add uppercase & lowercase checks
- Hide password input (like real apps)
- Build GUI version
- Add password strength meter
