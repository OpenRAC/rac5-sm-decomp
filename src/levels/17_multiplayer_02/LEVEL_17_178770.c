/* LEVEL_17:0x178770 -- placement copy of LEVEL_01_1CC440.c: clears a pending flag and calls two helpers, then sets a completion byte. */

struct Obj {
    char pad_00[0x10];
    unsigned char b_10;
    unsigned char b_11;
};

extern struct Obj D_002D6E78;

void func_1785B8(void *a0);
void func_178600(void *a0);

void func_178770(void *a0)
{
    if (D_002D6E78.b_10 != 0) {
        func_1785B8(a0);
        D_002D6E78.b_10 = 0;
    }
    func_178600(a0);
    D_002D6E78.b_11 = 1;
}
