
# MY_LIB

A collection of various functions in C language, including some from the standard library and others that facilitate my daily life as a student at Epitech. 


***For Epitech students beware of the -42, get inspired but don't copy.***


## Installation

**Install the library via the binary file**

1. Download the latest release.
2. Unzip the archive
3. Copy the `include/` folder and put it in your workspace
4. Create a folder `yourworkspace/lib` and put the `libmy.a` file in it;
5. Add the following flags to your Makefile: `-Llib/ -lmy`
\
***Compile and install via the repository***
1. Open your terminal
2. To clone and build the binary do this:
```bash
git clone https://github.com/VirgilGX/my_lib.git
cd my_lib/
make
```
3. Do steps 3, 4 and 5 in the upper section
## Usage/Examples

```c
#include "my_lib.h"

int main(void)
{
    const char *str = "Hello, world!";
    my_put_str(str, 1);
    return 0;
}
```


## Authors

- [@VirgilGX](https://github.com/VirgilGX)


## Support

For support, email virgiil.gagnieux@epitech.eu.

