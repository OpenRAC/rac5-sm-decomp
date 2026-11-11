/* LEVEL_04:0x1DFC70 -- placement copy of LEVEL_01_1CC440.c: clears a pending flag and calls two helpers, then sets a completion byte. */

struct Obj {
    char pad_00[0x10];
    unsigned char b_10;
    unsigned char b_11;
};

extern struct Obj D_003B3D08;

void func_1DFAB8(void);
void func_1DFB00(void *a0);

void func_1DFC70(void *a0)
{
    if (D_003B3D08.b_10 != 0) {
        func_1DFAB8();
        D_003B3D08.b_10 = 0;
    }
    func_1DFB00(a0);
    D_003B3D08.b_11 = 1;
}
