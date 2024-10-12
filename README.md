# Advanced Security Layer for Windows


<img src = "https://www.poweradmin.com/blog/wp-content/uploads/2019/02/windows-10-security.jpg">

This program adds an additional layer of security to your PC, ensuring that even if an attacker gains access to your login credentials, your data remains protected. Upon successful login, the user is prompted with a secret action—creating a folder named **"Hello"** on the desktop within 40 seconds. Failure to complete this action results in an automatic system shutdown, preventing unauthorized access to your data.


The program operates discreetly in the background with no visible windows or pop-ups, ensuring that only the owner is aware of its presence, enhancing the security of your personal information.



<img src = "https://img.freepik.com/premium-photo/photo-real-stealth-hacker-icon-symbolizing-stealthy-nature-hackers-importance-v_980716-108843.jpg">
## How It Works

Once a user logs in, a 40-second timer begins. To prevent the system from shutting down, the user must create a folder on the desktop named **"Hello"**. If the folder is not created within the time limit, the computer will automatically shut down, protecting your data from unauthorized access.

## Features

- **Stealth Mode**: The program runs invisibly without any pop-ups or notifications, ensuring the attacker remains unaware of the extra security layer.
- **Simple yet Effective**: The shutdown mechanism is triggered if the required action is not performed, preventing an attacker from accessing your data even if they have logged in.
- **Configurable**: The program is open for enhancements and allows contributions for adding additional security features.

## Installation & Setup

1. **Download the repository**.
2. **Open the Startup Folder**:
   - Press `Win + R` and type `shell:startup` to open the Startup folder.
3. **Create a Shortcut**:
   - Right-click inside the folder and select **New > Shortcut**.
   - In the shortcut wizard, locate the `app.exe` file and create a shortcut for it.
   - Click **Next** and name the shortcut something discreet, such as **"Windows Manager"**, to maintain stealth.
4. Once completed, the program will automatically run every time the system starts.

Note: Delete te folder before shutting off the machine so the script can work next time again.


## Contributing

We welcome contributions to improve this project. If you'd like to enhance the security features or add new functionality, feel free to submit your ideas or create a pull request.

---

