/* LEVEL_02:0x1E1560 -- placement copy of LEVEL_01_1CC440.c: clears a pending flag and calls two helpers, then sets a completion byte. */

struct Obj {
    char pad_00[0x10];
    unsigned char b_10;
    unsigned char b_11;
};

extern struct Obj D_003B0780;

void func_1E13A8(void);
void func_1E13F0(void *a0);

void func_1E1560(void *a0)
{
    if (D_003B0780.b_10 != 0) {
        func_1E13A8();
        D_003B0780.b_10 = 0;
    }
    func_1E13F0(a0);
    D_003B0780.b_11 = 1;
}
