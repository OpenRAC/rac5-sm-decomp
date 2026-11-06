extern char D_001CFDE0[];
extern int D_001CFBB8[];
extern int D_001CFBA8[];
extern char D_002F9B88[];
extern int D_001CFDE8[];
extern char D_001CFDD8[];
extern void func_0ACDE8(int a);

void func_0AFE20(int idx, unsigned int val)
{
    unsigned char c = D_001CFDE0[idx];

    D_001CFBA8[idx] = 0;
    D_002F9B88[idx * 0x100] = 0;
    D_001CFDE8[idx] = 0;
    D_001CFBB8[idx] = val;
    if (c != 0) {
        D_001CFDE0[idx] = 0;
        D_001CFDD8[idx] = 1;
        func_0ACDE8(9);
    }
}
