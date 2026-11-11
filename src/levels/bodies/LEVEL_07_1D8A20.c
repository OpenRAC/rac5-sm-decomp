/* LEVEL_07:0x1D8A20 -- placement copy of LEVEL_01_1CC440.c: clears a pending flag and calls two helpers, then sets a completion byte. */

struct Obj {
    char pad_00[0x10];
    unsigned char b_10;
    unsigned char b_11;
};

extern struct Obj D_003AE208;

void func_1D8868(void);
void func_1D88B0(void *a0);

void func_1D8A20(void *a0)
{
    if (D_003AE208.b_10 != 0) {
        func_1D8868();
        D_003AE208.b_10 = 0;
    }
    func_1D88B0(a0);
    D_003AE208.b_11 = 1;
}
