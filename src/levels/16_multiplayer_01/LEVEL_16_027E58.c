extern char D_001E4090[];
extern int func_021620(void *ptr);
extern int func_027E38(int value);
extern int func_056398(void *ptr);
extern int func_079388(void);

int func_027E58(void)
{
    int n;

    n = *(int *)(func_021620(D_001E4090) + 4);
    return func_027E38(7) == 0
        || n != 2
        || func_056398(D_001E4090) != 0
        || func_079388() == 0x100
        || func_079388() == 0x80;
}
