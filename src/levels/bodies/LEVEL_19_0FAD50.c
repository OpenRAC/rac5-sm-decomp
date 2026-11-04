extern int *func_0FAB60(void);
extern void func_0270E8(int);
extern void func_0FAAB8(int *);

void func_0FAD50(void)
{
    int *object = func_0FAB60();

    if (object != 0) {
        int value = object[0];

        if (value != 0)
            func_0270E8(value - 1);
        func_0FAAB8(object);
    }
}
