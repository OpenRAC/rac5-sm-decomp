extern int *func_1183B8(void);
extern void func_0298E0(int);
extern void func_118310(int *);

void func_1185A8(void)
{
    int *object = func_1183B8();

    if (object != 0) {
        int value = object[0];

        if (value != 0)
            func_0298E0(value - 1);
        func_118310(object);
    }
}
