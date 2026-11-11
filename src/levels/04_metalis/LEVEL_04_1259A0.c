extern int *func_1257B0(unsigned int handle);
extern void func_029590(int);
extern void func_125708(int *);

void func_1259A0(unsigned int handle) {
    int *object = func_1257B0(handle);

    if (object != 0) {
        int value = object[0];

        if (value != 0)
            func_029590(value - 1);
        func_125708(object);
    }
}
