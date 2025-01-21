# Priority Queue Comparison

This project involves a comparison between priority queues implemented with and without heaps. It generates files to simulate the search for elements within these data structures and plots a graph to represent this behavior simulation.

## Table of Contents
- [Project Requirements](#project-requirements)
- [Cloning the Project](#cloning-the-project)
- [How it Works](#how-it-works)
    - [Creating and Activating a Virtual Environment](#creating-and-activating-a-virtual-environment)
        - [Linux/macOS](#linuxmacos)
        - [Windows](#windows)
    - [Installing Dependencies](#installing-dependencies)
    - [Note for Linux Users](#note-for-linux-users)
        - [Installing Tkinter](#installing-tkinter)
            - [Ubuntu/Debian](#ubuntudebian)
            - [Fedora](#fedora)
            - [Arch Linux](#arch-linux)
    - [Using CMake to Compile the Project](#using-cmake-to-compile-the-project)
- [Running the Project](#running-the-project)

## Project Requirements
- CMake version 3.28.3 or higher
- Python 3.12.3 or higher
- GCC 13.3.0 or higher

## Cloning the Project
To clone the project repository, use the following command:

```sh
git clone https://github.com/placidocordeiro/Priority-Queue-Comparison.git
```

After cloning, navigate to the project directory:

```sh
cd Priority-Queue-Comparison
```

## How it Works
To run the project more appropriately and simply, follow the steps below.

### Creating and Activating a Virtual Environment
To create a virtual environment, follow these steps:

#### Linux/macOS

1. Open the terminal.
2. Navigate to the project directory.
        ```sh
        cd /home/user/project-directory
        ```
        Replace the path with the path to the project on your computer.
3. Create the virtual environment with the command:
        ```sh
        python3 -m venv environment_name
        ```
4. Activate the virtual environment with the command:
        ```sh
        source environment_name/bin/activate
        ```

#### Windows

1. Open Command Prompt or PowerShell.
2. Navigate to the project directory.
        ```sh
        cd C:\Users\user\project-directory
        ```
        Replace the path with the path to the project on your computer.
3. Create the virtual environment with the command:
        ```sh
        python -m venv environment_name
        ```
4. Activate the virtual environment with the command:
        ```sh
        environment_name\Scripts\activate
        ```

After activating the virtual environment, you will see the environment name in parentheses at the beginning of the command line. To deactivate the virtual environment, use the command `deactivate`.

### Installing Dependencies

After activating the virtual environment, install the dependencies listed in the `requirements.txt` file with the following command:

```sh
pip install -r requirements.txt
```

This will ensure that all the necessary libraries for the project are installed in the virtual environment.

### Note for Linux Users

Make sure that Python's Tkinter is installed on your Linux operating system, as it does not come natively with the Python interpreter, unlike on Windows. Additionally, Tkinter cannot be downloaded via pip in virtual environments.

#### Installing Tkinter

To install Tkinter on different Linux distributions, follow the steps below:

##### Ubuntu/Debian

```sh
sudo apt-get update
sudo apt-get install python3-tk
```

##### Fedora

```sh
sudo dnf install python3-tkinter
```

##### Arch Linux

```sh
sudo pacman -S tk
```

After installing Tkinter, you can verify if the installation was successful by running the following command in Python:

```python
import tkinter
```

If there are no errors, Tkinter was installed correctly.

### Using CMake to Compile the Project

To compile the project using CMake, follow the steps below:

1. **Create a Build Directory**: It is a good practice to create a separate directory for the build files. In the project's root directory, run:
        ```sh
        mkdir build
        cd build
        ```

2. **Configure the Project**: In the build directory, run the CMake command to configure the project:
        ```sh
        cmake ..
        ```
        This command will generate the necessary configuration files to compile the project.

3. **Compile the Project**: After configuration, compile the project by running:
        ```sh
        make
        ```
        This command will compile the project and generate the executables in the build directory. The CMakeLists.txt file in the project is already configured to automatically run the generated executables, so you don't need to worry about this part unless you want to run them manually. If that's the case:

4. **Run the Project**: After compilation, you can run the project. The executables will be located in the build directory. To run, use:
        ```sh
        ./executable_name
        ```
        Replace `executable_name` with the name of the generated executable. Do this for each of the generated executables in the correct order, first generating the input.txt and then the output.txt.

By following these steps, you will have the project compiled and ready to run.

## Running the Project

With the virtual environment still activated, navigate to the `src/` directory of the project in the terminal:

```sh
cd src/
```

To run the `plot_graph.py` script, use the following command:

```sh
python3 plot_graph.py
```

This command will generate and display the graph based on the data simulated by the priority queues in a Tkinter window. If desired, you will have the option to save the graph on your machine in various formats from the window.
