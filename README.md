This repository is a test toolbox for Scilab. It requires "thirdparty" directory which can be downloaded as "external-library.zip" file from the page: https://scilab.in/fossee-scilab-toolbox. The "thirdparty" directory contains compiled library for a simple "multiplication" function written in C. After copying the "thirdparty" directory to the toolbox directory, on the scilab console run "exec builder.sce" to build the toolbox and then run "exec loader.sce" to load the toolbox.  Type "help" in the scilab console and browse through the help content of "test_toolbox". The external-library.zip file also contains separate instructions to work with MinGW on Windows OS.

This toolbox overall demonstrates
1. How to add a function defined in C in scilab
2. How to add a function defined in Scilab in Scilab
3. How to write help for the added functions
4. How to create a toolbox out of the above functions.

Instructions to compile, build and execute transpose C function.

1. Download the "external-library.zip" file if you haven't downloaded it and add the "test" directory file to the "external-library" directory then run the run.sh file in external-library using command "./run.sh". The "thirdparty" directory contains compiled library for the "transpose" function written in C.
2. Now copy the "thirdparty" directory to the toolbox.
3. Run "exec builder.sce" in the Scilab console if you haven't already built the toolbox.
4. Now, run "exec loader.sce" to load the toolbox.
5. Run transpose function on the scilab console. E.g. y = transpose([3 4 5;7 2 6])
6. Type "help" in the scilab console and browse through the help content of "text_toolbox" for more additional details about the "transpose" function.
