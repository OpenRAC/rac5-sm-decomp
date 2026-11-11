extern int *func_113638(unsigned int handle);
extern void func_028950(int);
extern void func_113590(int *);

void func_113828(unsigned int handle) {
    int *object = func_113638(handle);

    if (object != 0) {
        int value = object[0];

        if (value != 0)
            func_028950(value - 1);
        func_113590(object);
    }
}
