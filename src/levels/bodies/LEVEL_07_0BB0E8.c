extern char D_00210CE0[];
extern int D_00210AB8[];
extern int D_00210AA8[];
extern char D_0033E048[];
extern int D_00210CE8[];
extern char D_00210CD8[];
extern void func_0B8080(int a);

void func_0BB0E8(int idx, unsigned int val)
{
    unsigned char c = D_00210CE0[idx];

    D_00210AA8[idx] = 0;
    D_0033E048[idx * 0x100] = 0;
    D_00210CE8[idx] = 0;
    D_00210AB8[idx] = val;
    if (c != 0) {
        D_00210CE0[idx] = 0;
        D_00210CD8[idx] = 1;
        func_0B8080(9);
    }
}
