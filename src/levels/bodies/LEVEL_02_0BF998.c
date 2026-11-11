extern char D_002119A0[];
extern int D_00211778[];
extern int D_00211768[];
extern char D_0033FC48[];
extern int D_002119A8[];
extern char D_00211998[];
extern int func_0BC930(int index);

void func_0BF998(int idx, unsigned int val)
{
    unsigned char c = D_002119A0[idx];

    D_00211768[idx] = 0;
    D_0033FC48[idx * 0x100] = 0;
    D_002119A8[idx] = 0;
    D_00211778[idx] = val;
    if (c != 0) {
        D_002119A0[idx] = 0;
        D_00211998[idx] = 1;
        func_0BC930(9);
    }
}
