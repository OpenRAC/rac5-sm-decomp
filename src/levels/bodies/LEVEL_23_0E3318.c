extern unsigned char D_00302978[];
extern int D_001E9980[];
extern void func_0E1D28(void *, void *);
extern void func_0E3278(char *, int, void *);

void func_000E3318(int param_1)
{
    char local[16];
    int *p;
    int v;

    if (D_00302978[param_1 * 0x34] == 0) {
        p = (int *)((char *)D_001E9980 + param_1 * 0x24);
        v = *p;
        func_0E1D28(local, p);
        func_0E3278(D_00302978 + param_1 * 0x34 + 4, v, local);
        D_00302978[param_1 * 0x34] = 1;
    }
}
