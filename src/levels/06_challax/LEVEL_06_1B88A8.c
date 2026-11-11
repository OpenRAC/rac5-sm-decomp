/* LEVEL_06:0x1B88A8 -- placement copy of LEVEL_01_1CC440.c: clears a pending flag and calls two helpers, then sets a completion byte. */

struct Obj {
    char pad_00[0x10];
    unsigned char b_10;
    unsigned char b_11;
};

extern struct Obj D_00385238;

void func_1B86F0(void);
void func_1B8738(void *a0);

void func_1B88A8(void *a0)
{
    if (D_00385238.b_10 != 0) {
        func_1B86F0();
        D_00385238.b_10 = 0;
    }
    func_1B8738(a0);
    D_00385238.b_11 = 1;
}
