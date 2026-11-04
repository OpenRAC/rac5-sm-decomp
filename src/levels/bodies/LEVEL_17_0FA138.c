extern int *func_0F9F48(void);
extern void func_026EC0(int);
extern void func_0F9EA0(int *);

void func_0FA138(void)
{
    int *object = func_0F9F48();

    if (object != 0) {
        int value = object[0];

        if (value != 0)
            func_026EC0(value - 1);
        func_0F9EA0(object);
    }
}
