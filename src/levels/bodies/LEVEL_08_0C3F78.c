extern char D_002458A0[];
extern int D_00245678[];
extern int D_00245668[];
extern char D_003779C8[];
extern int D_002458A8[];
extern char D_00245898[];
extern void func_0C0F10(int a);

void func_0C3F78(int idx, unsigned int val)
{
    unsigned char c = D_002458A0[idx];

    D_00245668[idx] = 0;
    D_003779C8[idx * 0x100] = 0;
    D_002458A8[idx] = 0;
    D_00245678[idx] = val;
    if (c != 0) {
        D_002458A0[idx] = 0;
        D_00245898[idx] = 1;
        func_0C0F10(9);
    }
}
