extern unsigned char D_00318CB8[];
extern int D_00200400[];
extern void func_0EAD20(void *, void *);
extern void func_0EC270(char *, int, void *);

void func_000EC310(int param_1)
{
    char local[16];
    int *p;
    int v;

    if (D_00318CB8[param_1 * 0x34] == 0) {
        p = (int *)((char *)D_00200400 + param_1 * 0x24);
        v = *p;
        func_0EAD20(local, p);
        func_0EC270(D_00318CB8 + param_1 * 0x34 + 4, v, local);
        D_00318CB8[param_1 * 0x34] = 1;
    }
}
