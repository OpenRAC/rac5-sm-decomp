extern char D_00215EA0[];
extern int D_00215C78[];
extern int D_00215C68[];
extern char D_00342F48[];
extern int D_00215EA8[];
extern char D_00215E98[];
extern int func_0BB828(int index);

void func_0BE868(int idx, unsigned int val)
{
    unsigned char c = D_00215EA0[idx];

    D_00215C68[idx] = 0;
    D_00342F48[idx * 0x100] = 0;
    D_00215EA8[idx] = 0;
    D_00215C78[idx] = val;
    if (c != 0) {
        D_00215EA0[idx] = 0;
        D_00215E98[idx] = 1;
        func_0BB828(9);
    }
}
