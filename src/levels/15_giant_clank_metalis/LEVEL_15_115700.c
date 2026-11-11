extern unsigned char D_002F29C0[];
extern int D_00170738[];
extern void func_113F88(void *, void *);
extern void func_115660(char *, int, void *);

void func_00115700(int param_1)
{
    char local[16];
    int *p;
    int v;

    if (D_002F29C0[param_1 * 0x34] == 0) {
        p = (int *)((char *)D_00170738 + param_1 * 0x24);
        v = *p;
        func_113F88(local, p);
        func_115660(D_002F29C0 + param_1 * 0x34 + 4, v, local);
        D_002F29C0[param_1 * 0x34] = 1;
    }
}
