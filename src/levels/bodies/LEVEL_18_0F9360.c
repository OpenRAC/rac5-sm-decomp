extern int *func_0F9170(void);
extern void func_026AF0(int);
extern void func_0F90C8(int *);

void func_0F9360(void)
{
    int *object = func_0F9170();

    if (object != 0) {
        int value = object[0];

        if (value != 0)
            func_026AF0(value - 1);
        func_0F90C8(object);
    }
}
