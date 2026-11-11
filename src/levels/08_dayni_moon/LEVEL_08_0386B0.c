extern char D_00282360[];
extern char D_00257858[];

void func_13B540(void *a0, void *a1, int a2);

void func_0386B0(void)
{
    char *p = D_00282360;
    char *q;

    func_13B540(p, D_00257858, 4);
    q = *(char **)(p + 8);
    if (q == 0)
        return;
    *(float *)(q + 0x14) = 0.5f;
    *(float *)(q + 0x20) = 0.5f;
}
