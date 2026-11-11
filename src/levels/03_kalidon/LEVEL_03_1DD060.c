/* LEVEL_03:0x1DD060 -- placement copy of LEVEL_01_1CC440.c: clears a pending flag and calls two helpers, then sets a completion byte. */

struct Obj {
    char pad_00[0x10];
    unsigned char b_10;
    unsigned char b_11;
};

extern struct Obj D_003B3968;

void func_1DCEA8(void);
void func_1DCEF0(void *a0);

void func_1DD060(void *a0)
{
    if (D_003B3968.b_10 != 0) {
        func_1DCEA8();
        D_003B3968.b_10 = 0;
    }
    func_1DCEF0(a0);
    D_003B3968.b_11 = 1;
}
