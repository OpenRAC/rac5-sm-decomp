extern char D_001ABBE0[];
extern int D_001AB9B8[];
extern int D_001AB9A8[];
extern char D_00276808[];
extern int D_001ABBE8[];
extern char D_001ABBD8[];
extern int func_0A4928(int a);

void func_0A79B0(int idx, unsigned int val)
{
    unsigned char c = D_001ABBE0[idx];

    D_001AB9A8[idx] = 0;
    D_00276808[idx * 0x100] = 0;
    D_001ABBE8[idx] = 0;
    D_001AB9B8[idx] = val;
    if (c != 0) {
        D_001ABBE0[idx] = 0;
        D_001ABBD8[idx] = 1;
        func_0A4928(9);
    }
}
