# INSTALATION OF ncurses LIBRARY

```shell
sudo apt-get install libncurses5-dev libncursesw5-dev
```

# COMPILE

```shell
g++ -c hello_world.cpp
```

# LINKING PROCESS

You must link the ncurse library to your compiled code

```shell
g++ hello_world.o -o hello_world -lncurses
```

