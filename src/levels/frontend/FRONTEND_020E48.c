extern char *D_0032814;

int func_0205B8(int);
int func_020AE8(void);
void func_003E10(void);
void func_021210(void *);

int func_020E48(void *a0)
{
    unsigned int r;

    if (!D_0032814)
        return 0;
    if (func_0205B8(1))
        return 0;
    r = func_020AE8();
    if (r == 0xFFFFFFFFu)
        return 0;
    func_003E10();
    func_021210(a0);
    *(int *)((char *)D_0032814 + 4) = 9;
    *(int *)((char *)D_0032814 + 0xC) = r;
    return 1;
}
