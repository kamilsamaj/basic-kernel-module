# Building a custom kernel module

## Compile
```shell
make -C /lib/modules/$(uname -r)/build M=$(pwd)
```

## Load the module
```shell
sudo insmod main.ko
```

## Check the output message
```shell
sudo dmesg
```