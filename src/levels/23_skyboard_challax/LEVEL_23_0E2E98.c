extern unsigned char D_00302870[];
extern int D_001E98A0[];
extern void func_0E1D28(void *, void *);
extern void func_0E2E00(char *, int, void *);

void func_000E2E98(int param_1)
{
    char local[16];
    int *p;
    int v;

    if (D_00302870[param_1 * 0x34] == 0) {
        p = (int *)((char *)D_001E98A0 + param_1 * 0x24);
        v = *p;
        func_0E1D28(local, p);
        func_0E2E00(D_00302870 + param_1 * 0x34 + 4, v, local);
        D_00302870[param_1 * 0x34] = 1;
    }
}
