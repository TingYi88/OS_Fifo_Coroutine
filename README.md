# LIFO Coroutine

This project is the first assignment of the NTOU CSE OS1111 course.

## Prerequisites

Fedora

```shell
# Install gcc, CMake, and git
sudo dnf install gcc gcc-c++ cmake git
```

## Configurations

Git

```shell
git config --global user.name <YOUR_NAME>
git config --global user.email <YOUR_EMAIL>

ssh-keygen -t ed25519 -C "<YOUR_EMAIL>"

# Copy the SSH key to the GitHub
cat ~/.ssh/id_ed25519.pub

git clone git@github.com:TingYi88/OS_StackfulCoroutine.git
```

VSCode

```
# Install VSCodium
curl -L https://github.com/VSCodium/vscodium/releases/download/1.73.1.22314/codium-1.73.1.22314-el7.x86_64.rpm -o codium.rpm
sudo dnf install ./codium.rpm

# Install CMake extensions
codium --install-extension ms-vscode.cmake-tools

# Install Traditional Chinese language pack
codium --install-extension MS-CEINTL.vscode-language-pack-zh-hant
```

## Build and Run

### Command-Line
```
# Setup the project with CMake

# Enter project's root directory
cd OS_StackfulCoroutine

# Define build directory and generate CMake files
cmake -B build/Debug

# Compile
cmake --build build/Debug

# Execute the program
./build/Debug/main
```
