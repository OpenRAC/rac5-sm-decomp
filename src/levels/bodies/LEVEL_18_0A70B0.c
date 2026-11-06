extern char D_001ABEE0[];
extern int D_001ABCB8[];
extern int D_001ABCA8[];
extern char D_00276A08[];
extern int D_001ABEE8[];
extern char D_001ABED8[];
extern void func_0A40A8(int a);

void func_0A70B0(int idx, unsigned int val)
{
    unsigned char c = D_001ABEE0[idx];

    D_001ABCA8[idx] = 0;
    D_00276A08[idx * 0x100] = 0;
    D_001ABEE8[idx] = 0;
    D_001ABCB8[idx] = val;
    if (c != 0) {
        D_001ABEE0[idx] = 0;
        D_001ABED8[idx] = 1;
        func_0A40A8(9);
    }
}
