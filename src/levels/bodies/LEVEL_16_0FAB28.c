extern int *func_0FA938(void);
extern void func_027540(int);
extern void func_0FA890(int *);

void func_0FAB28(void)
{
    int *object = func_0FA938();

    if (object != 0) {
        int value = object[0];

        if (value != 0)
            func_027540(value - 1);
        func_0FA890(object);
    }
}
