/* LEVEL_01:0x1DD2D0 -- placement copy of LEVEL_16_18E7F8.c: placement copy of LEVEL_01_1DD2D0.c: runs func_1DF9B8 on each of the 2x3 records of a table, then func_1DFE10 on the shared record and func_1DFE40 with the argument and a fixed second one. */
extern char D_002097A0[];
extern char D_00209860[];
extern char D_001DCCB8[];

extern void func_1DF9B8(void *p);
extern void func_1DFE10(void *p);
extern int func_1DFE40(void *first, void *second);

void func_1DD2D0(void *a0)
{
    unsigned int i;
    unsigned int j;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++)
            func_1DF9B8(D_002097A0 + i * 0x60 + j * 0x20);
    }
    func_1DFE10(D_00209860);
    func_1DFE40(a0, D_001DCCB8);
}
