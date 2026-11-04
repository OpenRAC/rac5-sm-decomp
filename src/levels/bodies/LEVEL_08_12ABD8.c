extern int *func_12A9E8(void);
extern void func_02A060(int);
extern void func_12A940(int *);

void func_12ABD8(void)
{
    int *object = func_12A9E8();

    if (object != 0) {
        int value = object[0];

        if (value != 0)
            func_02A060(value - 1);
        func_12A940(object);
    }
}
