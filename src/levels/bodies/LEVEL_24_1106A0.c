extern int *func_1104B0(void);
extern void func_027028(int);
extern void func_110408(int *);

void func_1106A0(void)
{
    int *object = func_1104B0();

    if (object != 0) {
        int value = object[0];

        if (value != 0)
            func_027028(value - 1);
        func_110408(object);
    }
}
