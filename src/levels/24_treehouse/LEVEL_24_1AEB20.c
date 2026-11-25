/* LEVEL_24:0x1AEB20 -- placement copy of LEVEL_16_18E7F8.c: placement copy of LEVEL_01_1DD2D0.c: runs func_1B1208 on each of the 2x3 records of a table, then func_1B1660 on the shared record and func_1B1690 with the argument and a fixed second one. */
extern char D_001DA5E8[];
extern char D_001DA6A8[];
extern char D_001AE508[];

extern void func_1B1208(void *p);
extern void func_1B1660(void *p);
extern int func_1B1690(void *first, void *second);

void func_1AEB20(void *a0)
{
    unsigned int i;
    unsigned int j;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++)
            func_1B1208(D_001DA5E8 + i * 0x60 + j * 0x20);
    }
    func_1B1660(D_001DA6A8);
    func_1B1690(a0, D_001AE508);
}
