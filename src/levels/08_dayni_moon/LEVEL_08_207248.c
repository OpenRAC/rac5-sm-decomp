/* LEVEL_08:0x207248 -- placement copy of LEVEL_01_1CC440.c: clears a pending flag and calls two helpers, then sets a completion byte. */

struct Obj {
    char pad_00[0x10];
    unsigned char b_10;
    unsigned char b_11;
};

extern struct Obj D_003EB250;

void func_207090(void);
void func_2070D8(void *a0);

void func_207248(void *a0)
{
    if (D_003EB250.b_10 != 0) {
        func_207090();
        D_003EB250.b_10 = 0;
    }
    func_2070D8(a0);
    D_003EB250.b_11 = 1;
}
