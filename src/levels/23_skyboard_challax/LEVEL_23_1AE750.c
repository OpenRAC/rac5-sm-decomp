/* LEVEL_23:0x1AE750 -- placement copy of LEVEL_16_18E7F8.c: placement copy of LEVEL_01_1DD2D0.c: runs func_1B0E38 on each of the 2x3 records of a table, then func_1B1290 on the shared record and func_1B12C0 with the argument and a fixed second one. */
extern char D_001DCA00[];
extern char D_001DCAC0[];
extern char D_001AE138[];

extern void func_1B0E38(void *p);
extern void func_1B1290(void *p);
extern int func_1B12C0(void *first, void *second);

void func_1AE750(void *a0)
{
    unsigned int i;
    unsigned int j;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++)
            func_1B0E38(D_001DCA00 + i * 0x60 + j * 0x20);
    }
    func_1B1290(D_001DCAC0);
    func_1B12C0(a0, D_001AE138);
}
