extern unsigned char D_002FD2F0[];
extern int D_001E74A0[];
extern void func_0E6A50(void *, void *);
extern void func_0E7B28(char *, int, void *);

void func_000E7BC0(int param_1)
{
    char local[16];
    int *p;
    int v;

    if (D_002FD2F0[param_1 * 0x34] == 0) {
        p = (int *)((char *)D_001E74A0 + param_1 * 0x24);
        v = *p;
        func_0E6A50(local, p);
        func_0E7B28(D_002FD2F0 + param_1 * 0x34 + 4, v, local);
        D_002FD2F0[param_1 * 0x34] = 1;
    }
}
