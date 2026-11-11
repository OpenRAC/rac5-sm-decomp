extern unsigned char D_0034BC30[];
extern int D_002300A0[];
extern void func_0F6378(void *, void *);
extern void func_0F7450(char *, int, void *);

void func_000F74E8(int param_1)
{
    char local[16];
    int *p;
    int v;

    if (D_0034BC30[param_1 * 0x34] == 0) {
        p = (int *)((char *)D_002300A0 + param_1 * 0x24);
        v = *p;
        func_0F6378(local, p);
        func_0F7450(D_0034BC30 + param_1 * 0x34 + 4, v, local);
        D_0034BC30[param_1 * 0x34] = 1;
    }
}
