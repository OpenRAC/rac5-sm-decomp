/* LEVEL_02:0x1F1F68 -- placement copy of LEVEL_16_18E7F8.c: placement copy of LEVEL_01_1DD2D0.c: runs func_1F4650 on each of the 2x3 records of a table, then func_1F4AA8 on the shared record and func_1F4AD8 with the argument and a fixed second one. */
extern char D_0021E6F0[];
extern char D_0021E7B0[];
extern char D_001F1950[];

extern void func_1F4650(void *p);
extern void func_1F4AA8(void *p);
extern int func_1F4AD8(void *first, void *second);

void func_1F1F68(void *a0)
{
    unsigned int i;
    unsigned int j;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++)
            func_1F4650(D_0021E6F0 + i * 0x60 + j * 0x20);
    }
    func_1F4AA8(D_0021E7B0);
    func_1F4AD8(a0, D_001F1950);
}
