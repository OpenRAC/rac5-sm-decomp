/* LEVEL_09:0x1B2960 -- placement copy of LEVEL_01_1CC440.c: clears a pending flag and calls two helpers, then sets a completion byte. */

struct Obj {
    char pad_00[0x10];
    unsigned char b_10;
    unsigned char b_11;
};

extern struct Obj D_00380000;

void func_1B27A8(void);
void func_1B27F0(void *a0);

void func_1B2960(void *a0)
{
    if (D_00380000.b_10 != 0) {
        func_1B27A8();
        D_00380000.b_10 = 0;
    }
    func_1B27F0(a0);
    D_00380000.b_11 = 1;
}
