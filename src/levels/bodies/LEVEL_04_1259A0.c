extern int *func_1257B0(void);
extern void func_029590(int);
extern void func_125708(int *);

void func_1259A0(void)
{
    int *object = func_1257B0();

    if (object != 0) {
        int value = object[0];

        if (value != 0)
            func_029590(value - 1);
        func_125708(object);
    }
}
