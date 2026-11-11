extern unsigned char D_0031E2B8[];
extern int D_00205680[];
extern void func_0E7F00(void *, void *);
extern void func_0E9450(char *, int, void *);

void func_000E94F0(int param_1)
{
    char local[16];
    int *p;
    int v;

    if (D_0031E2B8[param_1 * 0x34] == 0) {
        p = (int *)((char *)D_00205680 + param_1 * 0x24);
        v = *p;
        func_0E7F00(local, p);
        func_0E9450(D_0031E2B8 + param_1 * 0x34 + 4, v, local);
        D_0031E2B8[param_1 * 0x34] = 1;
    }
}
