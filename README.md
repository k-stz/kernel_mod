# How to use

## Compile kernel module
```bash
make
```
This will create a `hellomod.ko` kernel object file.

## load/unload kernel module:
```
sudo insmode hellomod.ko
# Show loaded modules
lsmod
# unload module
rmmod hellomod
```

The `modprobe` command is more clever and would do dependency checking and loading other necessary modules automatically.

## Kernel log messages
You can test if it worked by inspecting the logs with:
```
journalctl | grep kernel
```
And look for the Print messages

## Kernel object metadata
Disassemble kernel object binary and view section `.modinfo`
```bash
objdump -dj .modinfo hellmod.ko"
```

# Works on
5.15.6-arch2-1 #1 SMP PREEMPT Thu, 02 Dec 2021 15:47:09 +0000 x86_64 GNU/Linux

# Sources
- https://sysprog21.github.io/lkmpg/#hello-world
- Book "Linux Device Drivers, Third Edition" https://lwn.net/Kernel/LDD3/
- LiveOverflow Youtube "How Do Linux Kernel Drivers Work? - Learning Resource": https://www.youtube.com/watch?v=juGNPLdjLH4
- Engineer Man Youtube "How to build a Linux loadable kernel module that Rickrolls people" https://www.youtube.com/watch?v=CWihl19mJig
