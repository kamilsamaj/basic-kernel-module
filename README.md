# Building a custom kernel module

Demonstrating how to build a custom Linux kernel module

## Find you current kernel version and update `CMakeLists.txt`

This is necessary only if your IDE uses a CMake to properly load included C libraries

```shell
uname -r | sed 's/-generic//'
```

* Update the `KERNEL_VERSION` in [CMakeLists.txt](./CMakeLists.txt)

## Compile

```shell
make -C /lib/modules/$(uname -r)/build M=$(pwd)
```

## Load the module

```shell
sudo insmod main.ko
```

## Check the output message from the custom kernel module

```shell
sudo dmesg
```

## Install the module to be loaded during every boot

```shell
sudo cp basic_kernel_module.ko /lib/modules/$(uname -r)
sudo depmod -a
sudo modprobe basic_kernel_module
echo "basic_kernel_module" | sudo tee /etc/modules-load.d/basic_kernel_module.conf
```

## Remove the kernel module

```shell
sudo rmmod basic_kernel_module
sudo rm -fv "/lib/modules/$(uname -r)/basic_kernel_module"
sudo rm -rf /etc/modules-load.d/basic_kernel_module.conf
```
