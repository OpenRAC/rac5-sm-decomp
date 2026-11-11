/* LEVEL_19:0x181DC0 -- placement copy of LEVEL_01_1CC440.c: clears a pending flag and calls two helpers, then sets a completion byte. */

struct Obj {
    char pad_00[0x10];
    unsigned char b_10;
    unsigned char b_11;
};

extern struct Obj D_002E5E30;

void func_181C08(void *a0);
void func_181C50(void *a0);

void func_181DC0(void *a0)
{
    if (D_002E5E30.b_10 != 0) {
        func_181C08(a0);
        D_002E5E30.b_10 = 0;
    }
    func_181C50(a0);
    D_002E5E30.b_11 = 1;
}
