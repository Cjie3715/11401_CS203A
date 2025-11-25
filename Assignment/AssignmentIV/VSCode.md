# Connect to GitHub with VSCode

## Prerequisites
Before you begin, ensure you have the following:
- Visual Studio Code installed on your computer. [Download VS Code here](https://code.visualstudio.com/)
- Git installed and configured on your system. [Download Git here](https://git-scm.com/).
- A GitHub account.

## Steps to Connect to GitHub

1. **Install the GitHub Extension for VSCode**
    - Open VSCode.
    - Go to the Extensions view by clicking on the Extensions icon in the Activity Bar on the side of the window.
    - Search for "GitHub Pull Requests and Issues" and install the extension.

2. **Sign in to GitHub**
    - Open the Command Palette (`Ctrl+Shift+P` or `Cmd+Shift+P` on macOS).
    - Type `GitHub: Sign in` and select the option.
    - Follow the prompts to authenticate with your GitHub account.

3. **Clone a Repository**
    - In VSCode, open the Command Palette.
    - Type `Git: Clone` and select the option.
    - Paste the URL of your GitHub repository when prompted.
    - Choose a local folder where the repository will be cloned.

4. **Open the Repository**
    - Once the repository is cloned, VSCode will prompt you to open it.
    - Click `Open` to start working on your project.

5. **Make Changes and Commit**
    - Edit files in the repository as needed.
    - Go to the Source Control view in VSCode.
    - Stage your changes, write a commit message, and commit the changes.

6. **Push Changes to GitHub**
    - After committing, click the `Sync Changes` button in the Source Control view.
    - This will push your changes to the GitHub repository.

## Additional Tips
- Use the built-in terminal in VSCode for advanced Git commands.
- Enable GitLens extension for enhanced Git insights.

By following these steps, you can easily connect and manage your GitHub repositories using Visual Studio Code.

---

# 開發環境
- 作業系統: Windows 11
- IDE: Visual Studio Code

---

# Git 指令
```text
git config --global user.name "your name"      // 設定使用者名稱
git config --global user.email "your email"    // 設定使用者 email
git init                                       // 建立 .git 資料夾
git status                                     // 確認 git 狀態
git add file_name                              // 將檔案加入 tracked
git add .                                      // 將目前資料夾的所有檔案加入 tracked
git commit -m "註記"                           // 將檔案提交至 git
git log                                        // 檢視過去提交紀錄 (按 q 退出)
git diff 還原點ID                              // 比較版本差異
git checkout 還原點ID -- 檔案名稱             // 還原檔案
git push                                       // 將專案推送至 GitHub
git pull                                       // 與 GitHub 同步專案
git checkout -b                                // 新增分支








