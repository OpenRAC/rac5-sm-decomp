extern unsigned char D_0034BD38[];
extern int D_00230180[];
extern void func_0F6378(void *, void *);
extern void func_0F78C8(char *, int, void *);

void func_000F7968(int param_1)
{
    char local[16];
    int *p;
    int v;

    if (D_0034BD38[param_1 * 0x34] == 0) {
        p = (int *)((char *)D_00230180 + param_1 * 0x24);
        v = *p;
        func_0F6378(local, p);
        func_0F78C8(D_0034BD38 + param_1 * 0x34 + 4, v, local);
        D_0034BD38[param_1 * 0x34] = 1;
    }
}
