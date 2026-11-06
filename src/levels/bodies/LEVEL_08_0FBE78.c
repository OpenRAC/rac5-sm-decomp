extern unsigned char D_003807B8[];
extern int D_00260480[];
extern void func_0FA888(void *, void *);
extern void func_0FBDD8(char *, int, void *);

void func_000FBE78(int param_1)
{
    char local[16];
    int *p;
    int v;

    if (D_003807B8[param_1 * 0x34] == 0) {
        p = (int *)((char *)D_00260480 + param_1 * 0x24);
        v = *p;
        func_0FA888(local, p);
        func_0FBDD8(D_003807B8 + param_1 * 0x34 + 4, v, local);
        D_003807B8[param_1 * 0x34] = 1;
    }
}
