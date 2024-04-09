# C Language Demo

This repository contains some basic code to demonstrate some basic C programming. It is to be used as a reference only, I have tried to use as few libraries as possible to make it as raw C as I can.


# Setting up C development env in VScode 

In order to begin coding in C, you need the following set up. I recomend following it in the order listed.

 - Visual Studio Code
	 - This can be installed from here: [Visual Studio Code Install Page](https://code.visualstudio.com/)
 - Installing required extensions for VScode
	 - Open the extensions panel on the left hand navigation page and search and install the following:
		 - C/C++ *by Microsoft*
		 - C/C++ Extension Pack *by Microsoft*
		 - Code Runner *by Jun Han*
	 - Open settings and search for "run in terminal"
		 - Find setting titled "Code-runner: Run In Terminal"
		 - Ensure it is checked/enabled
 - MSYS2
	 - This can be installed from here, I recomend using the default options the installed gives you [MSYS2 Installer](https://www.msys2.org/)
	 - Make sure you have run on completion checked so msys2 starts after it installs
	 - Once the msys terminal window opens, paste this command in to install C compiler
		 - `
pacman -S --needed base-devel mingw-w64-ucrt-x86_64-toolchain
`
	 - Once that command has run, go to the install location of msys2 and go into `\ucrt64\bin` and copy the full path
	 - Open environment varibles by searching in the windows search bar
		 - Click environement variables
		 - Then double click on Path in user variables list and click new, then paste in the path you copied eralier for `\ucrt64\bin`
	 - Restart Visual Studio Code

Here is a YouTube video that goes through this process if you need further help:
[Video](https://www.youtube.com/watch?v=NYBFShZXSpQ)

You should now be able to clone this repository and run it in VScode

# Current Features

 - Launcher file that calls other features
 - Calculator Application
