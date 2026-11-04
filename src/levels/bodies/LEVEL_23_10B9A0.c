extern int *func_10B7B0(void);
extern void func_027658(int);
extern void func_10B708(int *);

void func_10B9A0(void)
{
    int *object = func_10B7B0();

    if (object != 0) {
        int value = object[0];

        if (value != 0)
            func_027658(value - 1);
        func_10B708(object);
    }
}
