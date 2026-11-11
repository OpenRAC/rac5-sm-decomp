extern unsigned char D_00348930[];
extern int D_0022B6A0[];
extern void func_0F4FF0(void *, void *);
extern void func_0F60C8(char *, int, void *);

void func_000F6160(int param_1)
{
    char local[16];
    int *p;
    int v;

    if (D_00348930[param_1 * 0x34] == 0) {
        p = (int *)((char *)D_0022B6A0 + param_1 * 0x24);
        v = *p;
        func_0F4FF0(local, p);
        func_0F60C8(D_00348930 + param_1 * 0x34 + 4, v, local);
        D_00348930[param_1 * 0x34] = 1;
    }
}
