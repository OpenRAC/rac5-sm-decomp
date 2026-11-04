extern int *func_120590(void);
extern void func_02A2B0(int);
extern void func_1204E8(int *);

void func_120780(void)
{
    int *object = func_120590();

    if (object != 0) {
        int value = object[0];

        if (value != 0)
            func_02A2B0(value - 1);
        func_1204E8(object);
    }
}
