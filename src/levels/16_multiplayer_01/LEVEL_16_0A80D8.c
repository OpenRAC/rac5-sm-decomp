extern char D_001AAA60[];
extern int D_001AA838[];
extern int D_001AA828[];
extern char D_00276688[];
extern int D_001AAA68[];
extern char D_001AAA58[];
extern int func_0A50B0(int index);

void func_0A80D8(int idx, unsigned int val)
{
    unsigned char c = D_001AAA60[idx];

    D_001AA828[idx] = 0;
    D_00276688[idx * 0x100] = 0;
    D_001AAA68[idx] = 0;
    D_001AA838[idx] = val;
    if (c != 0) {
        D_001AAA60[idx] = 0;
        D_001AAA58[idx] = 1;
        func_0A50B0(9);
    }
}
