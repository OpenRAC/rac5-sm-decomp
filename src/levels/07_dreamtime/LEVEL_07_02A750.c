extern char D_0024AA40[];
extern int func_024108(void *ptr);
extern int func_02A730(int value);
extern int func_0646C0(void *ptr);
extern int func_089F18(void);

int func_02A750(void)
{
    int n;

    n = *(int *)(func_024108(D_0024AA40) + 4);
    return func_02A730(7) == 0
        || n != 2
        || func_0646C0(D_0024AA40) != 0
        || func_089F18() == 0x100
        || func_089F18() == 0x80;
}
