extern int *func_0D3798(void);
extern void func_024048(int);
extern void func_0D36F0(int *);

void func_0D3988(void)
{
    int *object = func_0D3798();

    if (object != 0) {
        int value = object[0];

        if (value != 0)
            func_024048(value - 1);
        func_0D36F0(object);
    }
}
