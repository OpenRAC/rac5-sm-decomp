extern int *func_1183B8(unsigned int handle);
extern void func_0298E0(int);
extern void func_118310(int *);

void func_1185A8(unsigned int handle) {
    int *object = func_1183B8(handle);

    if (object != 0) {
        int value = object[0];

        if (value != 0)
            func_0298E0(value - 1);
        func_118310(object);
    }
}
