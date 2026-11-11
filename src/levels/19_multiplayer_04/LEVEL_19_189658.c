/* LEVEL_19:0x189658 -- placement copy of LEVEL_16_18C8C0.c: forwards its two arguments to the shared helper with one of two tables chosen by the third argument. */
extern int D_001BF7A4;
extern char D_001BF7B8[];
extern char D_001BF858[];
extern char D_001BF878[];
extern void func_189090(int a0, int a1, int a2, char *a3, char *t0);

void func_189658(int a1, int a2, int sel)
{
    if (sel != 0) {
        func_189090(D_001BF7A4, a1, a2, D_001BF878, D_001BF7B8);
    } else {
        func_189090(D_001BF7A4, a1, a2, D_001BF858, D_001BF7B8);
    }
}
