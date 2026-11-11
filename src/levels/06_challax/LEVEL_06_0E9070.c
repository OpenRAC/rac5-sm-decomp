extern unsigned char D_0031E1B0[];
extern int D_002055A0[];
extern void func_0E7F00(void *, void *);
extern void func_0E8FD8(char *, int, void *);

void func_000E9070(int param_1)
{
    char local[16];
    int *p;
    int v;

    if (D_0031E1B0[param_1 * 0x34] == 0) {
        p = (int *)((char *)D_002055A0 + param_1 * 0x24);
        v = *p;
        func_0E7F00(local, p);
        func_0E8FD8(D_0031E1B0 + param_1 * 0x34 + 4, v, local);
        D_0031E1B0[param_1 * 0x34] = 1;
    }
}
