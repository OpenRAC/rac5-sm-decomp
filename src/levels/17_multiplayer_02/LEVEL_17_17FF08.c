/* LEVEL_17:0x17FF08 -- placement copy of LEVEL_16_18C8C0.c: forwards its two arguments to the shared helper with one of two tables chosen by the third argument. */
extern int D_001B1A74;
extern char D_001B1A88[];
extern char D_001B1B28[];
extern char D_001B1B48[];
extern void func_17F940(int a0, int a1, int a2, char *a3, char *t0);

void func_17FF08(int a1, int a2, int sel)
{
    if (sel != 0) {
        func_17F940(D_001B1A74, a1, a2, D_001B1B48, D_001B1A88);
    } else {
        func_17F940(D_001B1A74, a1, a2, D_001B1B28, D_001B1A88);
    }
}
