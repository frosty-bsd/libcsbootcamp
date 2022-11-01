### CSBOOTCAMP LIBRARY

## Installation - Linux / MacOS

1. Download the latest release from https://github.com/frosty-bsd/libcsbootcamp/releases
1. Extract `libcsbootcamp-*.*`
1. `cd libcsbootcamp-*`
1. `sudo make install`

By default, we install to `/usr/local`. If you'd like to change the installation location, run
`sudo DESTDIR=/path/to/install make install` as desired.

## Makefile & Clang

1. Install clang on your OS by using this command:
`sudo apt install clang`
2. In your working directory create `Makefile` by typing:
`nano Makefile`
3. Paste the following code:
```
LDLIBS += -lcsbootcamp
CC := clang
MAKEFLAGS += --silent
```
4. Save & Quit.

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

**#include <csbootcamp.h>**


