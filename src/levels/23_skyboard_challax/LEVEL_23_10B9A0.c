extern int *func_10B7B0(unsigned int handle);
extern void func_027658(int);
extern void func_10B708(int *);

void func_10B9A0(unsigned int handle) {
    int *object = func_10B7B0(handle);

    if (object != 0) {
        int value = object[0];

        if (value != 0)
            func_027658(value - 1);
        func_10B708(object);
    }
}
