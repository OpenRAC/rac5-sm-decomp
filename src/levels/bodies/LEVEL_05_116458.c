extern int *func_116268(void);
extern void func_028760(int);
extern void func_1161C0(int *);

void func_116458(void)
{
    int *object = func_116268();

    if (object != 0) {
        int value = object[0];

        if (value != 0)
            func_028760(value - 1);
        func_1161C0(object);
    }
}
