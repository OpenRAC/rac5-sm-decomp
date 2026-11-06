extern char D_001FC9E0[];
extern int D_001FC7B8[];
extern int D_001FC7A8[];
extern char D_00328748[];
extern int D_001FC9E8[];
extern char D_001FC9D8[];
extern void func_0B6020(int a);

void func_0B9088(int idx, unsigned int val)
{
    unsigned char c = D_001FC9E0[idx];

    D_001FC7A8[idx] = 0;
    D_00328748[idx * 0x100] = 0;
    D_001FC9E8[idx] = 0;
    D_001FC7B8[idx] = val;
    if (c != 0) {
        D_001FC9E0[idx] = 0;
        D_001FC9D8[idx] = 1;
        func_0B6020(9);
    }
}
