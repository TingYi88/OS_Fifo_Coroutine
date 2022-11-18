# Stackful Coroutine

This project is the first assignment of the NTOU CSE OS1111 course.

## Prerequisites

Fedora

```shell
# Install gcc, CMake, and git
sudo dnf install gcc gcc-c++ cmake git
```

## Configurations

```shell
git config --global user.name <YOUR_NAME>
git config --global user.email <YOUR_EMAIL>

ssh-keygen -t ed25519 -C "<YOUR_EMAIL>"

# Copy the SSH key to the GitHub
cat ~/.ssh/id_ed25519.pub

git clone git@github.com:TingYi88/OS_StackfulCoroutine.git
```


## Build and Run

```
# Setup the project with CMake
cd OS_StackfulCoroutine
cmake -B build/Debug
cmake --build build/Debug

# Execute the program
./build/Debug/main
```
