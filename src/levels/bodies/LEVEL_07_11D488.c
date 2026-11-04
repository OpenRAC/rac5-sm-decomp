extern int *func_11D298(void);
extern void func_029E28(int);
extern void func_11D1F0(int *);

void func_11D488(void)
{
    int *object = func_11D298();

    if (object != 0) {
        int value = object[0];

        if (value != 0)
            func_029E28(value - 1);
        func_11D1F0(object);
    }
}
