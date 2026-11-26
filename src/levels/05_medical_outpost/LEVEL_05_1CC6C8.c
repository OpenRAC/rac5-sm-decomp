/* LEVEL_05:0x1CC6C8 -- placement copy of LEVEL_16_18E7F8.c: placement copy of LEVEL_01_1DD2D0.c: runs func_1CEDB0 on each of the 2x3 records of a table, then func_1CF208 on the shared record and func_1CF238 with the argument and a fixed second one. */
extern char D_001F8718[];
extern char D_001F87D8[];
extern char D_001CC0B0[];

extern void func_1CEDB0(void *p);
extern void func_1CF208(void *p);
extern int func_1CF238(void *first, void *second);

void func_1CC6C8(void *a0)
{
    unsigned int i;
    unsigned int j;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++)
            func_1CEDB0(D_001F8718 + i * 0x60 + j * 0x20);
    }
    func_1CF208(D_001F87D8);
    func_1CF238(a0, D_001CC0B0);
}
