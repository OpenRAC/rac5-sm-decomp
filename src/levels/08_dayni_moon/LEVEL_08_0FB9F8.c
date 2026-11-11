extern unsigned char D_003806B0[];
extern int D_002603A0[];
extern void func_0FA888(void *, void *);
extern void func_0FB960(char *, int, void *);

void func_000FB9F8(int param_1)
{
    char local[16];
    int *p;
    int v;

    if (D_003806B0[param_1 * 0x34] == 0) {
        p = (int *)((char *)D_002603A0 + param_1 * 0x24);
        v = *p;
        func_0FA888(local, p);
        func_0FB960(D_003806B0 + param_1 * 0x34 + 4, v, local);
        D_003806B0[param_1 * 0x34] = 1;
    }
}
