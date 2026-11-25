/* LEVEL_19:0x18EB10 -- placement copy of LEVEL_16_18E7F8.c: placement copy of LEVEL_01_1DD2D0.c: runs func_1911F8 on each of the 2x3 records of a table, then func_191650 on the shared record and func_191680 with the argument and a fixed second one. */
extern char D_001BFA20[];
extern char D_001BFAE0[];
extern char D_0018E4F8[];

extern void func_1911F8(void *p);
extern void func_191650(void *p);
extern void func_191680(void *first, void *second);

void func_18EB10(void *a0)
{
    unsigned int i;
    unsigned int j;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++)
            func_1911F8(D_001BFA20 + i * 0x60 + j * 0x20);
    }
    func_191650(D_001BFAE0);
    func_191680(a0, D_0018E4F8);
}
