### CSBOOTCAMP LIBRARY

## Installation - Linux / MacOS

1. Download the latest release from https://github.com/frosty-bsd/libcsbootcamp/releases
1. Extract `libcsbootcamp-*.*`
1. `cd libcsbootcamp-*`
1. `sudo make install`

By default, we install to `/usr/local`. If you'd like to change the installation location, run
`sudo DESTDIR=/path/to/install make install` as desired.

## Troubleshooting
1. If, when compiling a program, you see `/usr/bin/ld: cannot find -lcsbootcamp`:
Add `export LIBRARY_PATH=/usr/local/lib` to your `.bashrc`.
1. If, when compiling a program, you see `fatal error: 'csbootcamp.h' file not found`:
Add `export C_INCLUDE_PATH=/usr/local/include` to your `.bashrc`.
1. If, when executing a program, you see `error while loading shared libraries: libcsbootcamp.so.8: cannot open shared object file: No such file or directory`:
Add `export LD_LIBRARY_PATH=/usr/local/lib` to your `.bashrc`.

Close and reopen any terminal windows.

## Usage

Link with `-lcsbootcamp`.

    #include <csbootcamp.h>

    ...
    char c = get_char("Prompt: ");
    double d = get_double("Prompt: ");
    float f = get_float("Prompt: ");
    int i = get_int("Prompt: ");
    long l = get_long("Prompt: ");
    string s = get_string("Prompt: ");

