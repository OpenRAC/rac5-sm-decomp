/* LEVEL_16:0x185128 -- placement copy of LEVEL_01_1CC440.c: clears a pending flag and calls two helpers, then sets a completion byte. */

struct Obj {
    char pad_00[0x10];
    unsigned char b_10;
    unsigned char b_11;
};

extern struct Obj D_002E5C88;

void func_184F70(void *a0);
void func_184FB8(void *a0);

void func_185128(void *a0)
{
    if (D_002E5C88.b_10 != 0) {
        func_184F70(a0);
        D_002E5C88.b_10 = 0;
    }
    func_184FB8(a0);
    D_002E5C88.b_11 = 1;
}
