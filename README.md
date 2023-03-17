

# BruteForceSimulator

## About Project:

The [brute force attack](https://en.wikipedia.org/wiki/Brute-force_attack) simulator is a software application that simulates a brute force attack to crack passwords for unauthorized access to a system. This project aims to create a user-friendly and easy-to-use application to provide [password awareness](https://www.cisa.gov/sites/default/files/publications/Cybersecurity%20Awareness%20Month%202021%20-%20Creating%20Passwords%20Tip%20Sheet.pdf) with a minimalistic graphical user interface that allows users to simulate a brute-force attack to crack passwords.

### Menu Page.

The application has a tools menu page that provides access to the administrator tool, login page, and brute force terminal. This page serves as a dashboard for users to navigate and select the tool they want to use.

![Screenshot (10)](https://user-images.githubusercontent.com/96857515/205456749-c58e1fe8-ee1a-4ec6-a8b9-5631f8fa82bf.png)

### Administrator Tool.

The administrator tool allows the user to set a password for creating a user account. Once the user account is created, the user can log in to the system using their account password. 

![Screenshot (13)](https://user-images.githubusercontent.com/96857515/205457265-34d4b67c-6964-49e1-839f-f8fc0cb04625.png)

### Login Page.

The login page is where the user enters their account credentials to log in to the system. The password is hashed and stored in a database to ensure the security of the user's data. If the user enters the wrong password, they will be denied access to the system. This system is designed to prevent unauthorized access to the system by only allowing authorized users with valid passwords to log in. That’s opens the hackers target page.

![Loging page](https://user-images.githubusercontent.com/96857515/225788771-b3340d4c-f7cd-4549-adcc-732d6e755bca.png)

### Brute Force Terminal

The brute force terminal is where the user(hacker) can initiate a brute force attack to crack the password of an account. The algorithm used in this application can crack a 6-digit password in a fraction of a second, depending on the system's hash rate, which is currently at 5kH/s. However, it is important to note that brute force attacks can take a significant amount of time and resources to crack complex passwords.

![Command](https://user-images.githubusercontent.com/96857515/225788913-42be08a4-2d10-4774-ab04-aad377dda6a7.png)

### Target Page

This is the page secured by password from unauthorized access. Hacker is trying to get access to this simulator to this page. This page is represent the page which contain the super sensitive data.

![Victime page](https://user-images.githubusercontent.com/96857515/225789659-a7aa52af-0390-4cbd-8a5a-6e31020f07cc.png)

### Programming Language

This project is developed using C++ programming language, which is well-known for its performance and efficiency in handling large amounts of data. The user-friendly and minimalistic graphical user interface is designed to make the application easy to understand for non-technical users.

### Conclusion

The brute force simulator project is a useful tool for testing the strength of passwords for demonstration purpose which reveal password strength and give the idea that how brute force attack are made. The application's user-friendly and easy-to-use graphical user interface makes it understandable to non-technical users, while the powerful algorithm used in the brute force terminal ensures rapid results. Overall, this project provides an efficient and effective way to simulate brute force attacks and enhance the security of systems.

## Benefits of using this simulator:

* This algorithm can crack the 6-digit(practically no limit) password in a fraction of a second.

* Current hash rate is hash rate 5kH/S. It may vary depending upon the system you are executing this code.

* User-friendly minimalistic GUI with the help of C++ programming language.

## How to run the code on your machine:

This program is specially designed to run on **Turbo C++** IDE you can download the IDE [here.](https://developerinsider.co/download-turbo-c-for-windows-7-8-8-1-and-windows-10-32-64-bit-full-screen/)

Run the code using Turbo C++ IDE, instantly you will get this kind of Menu driven function in GUI.

![Screenshot (10)](https://user-images.githubusercontent.com/96857515/205456749-c58e1fe8-ee1a-4ec6-a8b9-5631f8fa82bf.png)

### Creating new password.

* Here first you can set the password of the **Admin** account by pressing `1`.

then hit `Enter`. Note that by defalut in entire application username is ***Admin*** only.

* After entering `1` you will be redirected to this page.

![Screenshot (13)](https://user-images.githubusercontent.com/96857515/205457265-34d4b67c-6964-49e1-839f-f8fc0cb04625.png)

In this activity you can set new password to the ***Admin*** account. 

>Note: By default ***123*** is the account password.

You can change to any numeric password you want. After setting new password you should press `Enter`. Now you are ready with your the newly set password.

### Logging in.

* For logging into the page useing the password first we have to go to the *login activity* by selecting `2` on the menu. The user name will be fetched automatically as the admin in loggin page, we just have to enter the *password*.

If the password is correct then the page is redirected to the *target page* with sensitive data else it will the error message as ***The username and password did not match!***

![Loging page](https://user-images.githubusercontent.com/96857515/225815175-a32edde7-3e50-4a74-86cf-6c6fa3c72dde.png)

### Initializing the brute force.

For initializing the brute force attack user has to select option 3 on the menu, this will redirect the user to this brute force terminal where the passwords are cracked.

![Loading Animation](https://user-images.githubusercontent.com/96857515/225815399-d5f21eba-eb67-4a2b-92b1-4c6e6796a78d.png)

Here it ask for command so we have to type the command “airtack ng” press enter it start trying all possible it will tell what password was attempted and what is the result. It will keep on trying until it got the right password. 

![Command](https://user-images.githubusercontent.com/96857515/225815268-426eb1e6-cbe5-47a1-a4bb-5b1d6b1831e2.png)

![Teminal at last](https://user-images.githubusercontent.com/96857515/225815028-c43093a9-1f16-40a9-9c2a-6f4b7241b159.png)

