extern unsigned char D_00348A38[];
extern int D_0022B780[];
extern void func_0F4FF0(void *, void *);
extern void func_0F6540(char *, int, void *);

void func_000F65E0(int param_1)
{
    char local[16];
    int *p;
    int v;

    if (D_00348A38[param_1 * 0x34] == 0) {
        p = (int *)((char *)D_0022B780 + param_1 * 0x24);
        v = *p;
        func_0F4FF0(local, p);
        func_0F6540(D_00348A38 + param_1 * 0x34 + 4, v, local);
        D_00348A38[param_1 * 0x34] = 1;
    }
}
