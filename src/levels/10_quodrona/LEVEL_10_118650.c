extern int *func_118460(unsigned int handle);
extern void func_0298C0(int);
extern void func_1183B8(int *);

void func_118650(unsigned int handle) {
    int *object = func_118460(handle);

    if (object != 0) {
        int value = object[0];

        if (value != 0)
            func_0298C0(value - 1);
        func_1183B8(object);
    }
}
