extern int *func_0DE5A8(unsigned int handle);
extern void func_0232C0(int);
extern void func_0DE500(int *);

void func_0DE798(unsigned int handle) {
    int *object = func_0DE5A8(handle);

    if (object != 0) {
        int value = object[0];

        if (value != 0)
            func_0232C0(value - 1);
        func_0DE500(object);
    }
}
