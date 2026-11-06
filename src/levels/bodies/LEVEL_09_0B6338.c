extern char D_001E67E0[];
extern int D_001E65B8[];
extern int D_001E65A8[];
extern char D_0030FEC8[];
extern int D_001E67E8[];
extern char D_001E67D8[];
extern void func_0B32D0(int a);

void func_0B6338(int idx, unsigned int val)
{
    unsigned char c = D_001E67E0[idx];

    D_001E65A8[idx] = 0;
    D_0030FEC8[idx * 0x100] = 0;
    D_001E67E8[idx] = 0;
    D_001E65B8[idx] = val;
    if (c != 0) {
        D_001E67E0[idx] = 0;
        D_001E67D8[idx] = 1;
        func_0B32D0(9);
    }
}
