extern int *func_110818(void);
extern void func_027ED0(int);
extern void func_110770(int *);

void func_110A08(void)
{
    int *object = func_110818();

    if (object != 0) {
        int value = object[0];

        if (value != 0)
            func_027ED0(value - 1);
        func_110770(object);
    }
}
