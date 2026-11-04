extern int *func_11A248(void);
extern void func_029AE8(int);
extern void func_11A1A0(int *);

void func_11A438(void)
{
    int *object = func_11A248();

    if (object != 0) {
        int value = object[0];

        if (value != 0)
            func_029AE8(value - 1);
        func_11A1A0(object);
    }
}
