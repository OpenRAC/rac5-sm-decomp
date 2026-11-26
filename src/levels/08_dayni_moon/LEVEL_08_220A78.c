/* LEVEL_08:0x220A78 -- placement copy of LEVEL_16_18E7F8.c: placement copy of LEVEL_01_1DD2D0.c: runs func_223160 on each of the 2x3 records of a table, then func_2235B8 on the shared record and func_2235E8 with the argument and a fixed second one. */
extern char D_002532D8[];
extern char D_00253398[];
extern char D_00220460[];

extern void func_223160(void *p);
extern void func_2235B8(void *p);
extern int func_2235E8(void *first, void *second);

void func_220A78(void *a0)
{
    unsigned int i;
    unsigned int j;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++)
            func_223160(D_002532D8 + i * 0x60 + j * 0x20);
    }
    func_2235B8(D_00253398);
    func_2235E8(a0, D_00220460);
}
