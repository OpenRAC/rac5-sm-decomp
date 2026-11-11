/* LEVEL_05:0x1BB850 -- placement copy of LEVEL_01_1CC440.c: clears a pending flag and calls two helpers, then sets a completion byte. */

struct Obj {
    char pad_00[0x10];
    unsigned char b_10;
    unsigned char b_11;
};

extern struct Obj D_0038FBA8;

void func_1BB698(void);
void func_1BB6E0(void *a0);

void func_1BB850(void *a0)
{
    if (D_0038FBA8.b_10 != 0) {
        func_1BB698();
        D_0038FBA8.b_10 = 0;
    }
    func_1BB6E0(a0);
    D_0038FBA8.b_11 = 1;
}
