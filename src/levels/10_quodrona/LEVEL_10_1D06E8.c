/* LEVEL_10:0x1D06E8 -- placement copy of LEVEL_01_1CC440.c: clears a pending flag and calls two helpers, then sets a completion byte. */

struct Obj {
    char pad_00[0x10];
    unsigned char b_10;
    unsigned char b_11;
};

extern struct Obj D_003A1F20;

void func_1D0530(void);
void func_1D0578(void *a0);

void func_1D06E8(void *a0)
{
    if (D_003A1F20.b_10 != 0) {
        func_1D0530();
        D_003A1F20.b_10 = 0;
    }
    func_1D0578(a0);
    D_003A1F20.b_11 = 1;
}
