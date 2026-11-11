extern int *func_0F4708(unsigned int handle);
extern void func_024080(int);
extern void func_0F4660(int *);

void func_0F48F8(unsigned int handle) {
    int *object = func_0F4708(handle);

    if (object != 0) {
        int value = object[0];

        if (value != 0)
            func_024080(value - 1);
        func_0F4660(object);
    }
}
