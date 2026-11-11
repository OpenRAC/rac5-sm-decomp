extern int *func_11D298(unsigned int handle);
extern void func_029E28(int);
extern void func_11D1F0(int *);

void func_11D488(unsigned int handle) {
    int *object = func_11D298(handle);

    if (object != 0) {
        int value = object[0];

        if (value != 0)
            func_029E28(value - 1);
        func_11D1F0(object);
    }
}
