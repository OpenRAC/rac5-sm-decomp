extern unsigned char D_0031D3F8[];
extern int D_00205700[];
extern void func_0EAF80(void *, void *);
extern void func_0EC4D0(char *, int, void *);

void func_000EC570(int param_1)
{
    char local[16];
    int *p;
    int v;

    if (D_0031D3F8[param_1 * 0x34] == 0) {
        p = (int *)((char *)D_00205700 + param_1 * 0x24);
        v = *p;
        func_0EAF80(local, p);
        func_0EC4D0(D_0031D3F8 + param_1 * 0x34 + 4, v, local);
        D_0031D3F8[param_1 * 0x34] = 1;
    }
}
