extern char D_001EB8E0[];
extern int D_001EB6B8[];
extern int D_001EB6A8[];
extern char D_003154C8[];
extern int D_001EB8E8[];
extern char D_001EB8D8[];
extern int func_0B0848(int a);

void func_0B3988(int idx, unsigned int val)
{
    unsigned char c = D_001EB8E0[idx];

    D_001EB6A8[idx] = 0;
    D_003154C8[idx * 0x100] = 0;
    D_001EB8E8[idx] = 0;
    D_001EB6B8[idx] = val;
    if (c != 0) {
        D_001EB8E0[idx] = 0;
        D_001EB8D8[idx] = 1;
        func_0B0848(9);
    }
}
