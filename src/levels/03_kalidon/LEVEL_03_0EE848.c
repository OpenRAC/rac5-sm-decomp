extern unsigned char D_0034C2B0[];
extern int D_0022F620[];
extern void func_0ED6D8(void *, void *);
extern void func_0EE7B0(char *, int, void *);

void func_000EE848(int param_1)
{
    char local[16];
    int *p;
    int v;

    if (D_0034C2B0[param_1 * 0x34] == 0) {
        p = (int *)((char *)D_0022F620 + param_1 * 0x24);
        v = *p;
        func_0ED6D8(local, p);
        func_0EE7B0(D_0034C2B0 + param_1 * 0x34 + 4, v, local);
        D_0034C2B0[param_1 * 0x34] = 1;
    }
}
