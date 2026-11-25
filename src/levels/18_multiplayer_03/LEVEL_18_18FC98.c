/* LEVEL_18:0x18FC98 -- placement copy of LEVEL_16_18E7F8.c: placement copy of LEVEL_01_1DD2D0.c: runs func_192380 on each of the 2x3 records of a table, then func_1927D8 on the shared record and func_192808 with the argument and a fixed second one. */
extern char D_001BFDB8[];
extern char D_001BFE78[];
extern char D_0018F680[];

extern void func_192380(void *p);
extern void func_1927D8(void *p);
extern void func_192808(void *first, void *second);

void func_18FC98(void *a0)
{
    unsigned int i;
    unsigned int j;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++)
            func_192380(D_001BFDB8 + i * 0x60 + j * 0x20);
    }
    func_1927D8(D_001BFE78);
    func_192808(a0, D_0018F680);
}
