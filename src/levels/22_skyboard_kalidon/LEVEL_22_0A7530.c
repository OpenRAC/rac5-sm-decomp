extern char D_0015BD60[];
extern int D_0015BB38[];
extern int D_0015BB28[];
extern char D_0027E308[];
extern int D_0015BD68[];
extern char D_0015BD58[];
extern int func_0A4570(int index);

void func_0A7530(int idx, unsigned int val)
{
    unsigned char c = D_0015BD60[idx];

    D_0015BB28[idx] = 0;
    D_0027E308[idx * 0x100] = 0;
    D_0015BD68[idx] = 0;
    D_0015BB38[idx] = val;
    if (c != 0) {
        D_0015BD60[idx] = 0;
        D_0015BD58[idx] = 1;
        func_0A4570(9);
    }
}
