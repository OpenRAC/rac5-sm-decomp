/* LEVEL_18:0x18DD60 -- placement copy of LEVEL_16_18C8C0.c: forwards its two arguments to the shared helper with one of two tables chosen by the third argument. */
extern int D_001BFB5C;
extern char D_001BFB70[];
extern char D_001BFC10[];
extern char D_001BFC30[];
extern void func_18D798(int a0, int a1, int a2, char *a3, char *t0);

void func_18DD60(int a1, int a2, int sel)
{
    if (sel != 0) {
        func_18D798(D_001BFB5C, a1, a2, D_001BFC30, D_001BFB70);
    } else {
        func_18D798(D_001BFB5C, a1, a2, D_001BFC10, D_001BFB70);
    }
}
