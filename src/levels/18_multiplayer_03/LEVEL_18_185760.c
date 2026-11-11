/* LEVEL_18:0x185760 -- placement copy of LEVEL_01_1CC440.c: clears a pending flag and calls two helpers, then sets a completion byte. */

struct Obj {
    char pad_00[0x10];
    unsigned char b_10;
    unsigned char b_11;
};

extern struct Obj D_002E5BF8;

void func_1855A8(void *a0);
void func_1855F0(void *a0);

void func_185760(void *a0)
{
    if (D_002E5BF8.b_10 != 0) {
        func_1855A8(a0);
        D_002E5BF8.b_10 = 0;
    }
    func_1855F0(a0);
    D_002E5BF8.b_11 = 1;
}
