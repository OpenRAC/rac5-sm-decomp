extern unsigned char D_00346E38[];
extern int D_0022B500[];
extern void func_0EFC40(void *, void *);
extern void func_0F1190(char *, int, void *);

void func_000F1230(int param_1)
{
    char local[16];
    int *p;
    int v;

    if (D_00346E38[param_1 * 0x34] == 0) {
        p = (int *)((char *)D_0022B500 + param_1 * 0x24);
        v = *p;
        func_0EFC40(local, p);
        func_0F1190(D_00346E38 + param_1 * 0x34 + 4, v, local);
        D_00346E38[param_1 * 0x34] = 1;
    }
}
