Instructions to compile, build and execute transpose C function.

1. Clone this repository to build and execute the transpose function. Run the following command in terminal to clone "git clone https://github.com/Abinash23/Scilab6-Test-Toolbox.git".
2. It requires "thirdparty" directory which can be download as an "external-library.zip" file from the page: https://scilab.in/fossee-scilab-toolbox.
3. Copy the test directory files to external-library and run the run.sh file in external-library using command "./run.sh". The "thirdparty" directory contains compiled library for the "transpose" function written in C.
2. Now copy the "thirdparty" directory to the toolbox directory.
3. Run "exec builder.sce" in the Scilab console.
4. Now, run "exec loader.sce" to load the toolbox.
5. Run transpose function on the scilab console. E.g. y = transpose([3 4 5;7 2 6])
6. Type "help" in the Scilab console and browse through the help content of "text_toolbox" for more additional details about the "transpose" function.
