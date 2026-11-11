/* LEVEL_01:0x1CC440 -- clears a pending flag and calls two helpers, then sets a completion byte. */

struct Obj {
    char pad_00[0x10];
    unsigned char b_10;
    unsigned char b_11;
};

extern struct Obj D_00398818;

void func_1CC288(void);
void func_1CC2D0(void *a0);

void func_1CC440(void *a0)
{
    if (D_00398818.b_10 != 0) {
        func_1CC288();
        D_00398818.b_10 = 0;
    }
    func_1CC2D0(a0);
    D_00398818.b_11 = 1;
}
