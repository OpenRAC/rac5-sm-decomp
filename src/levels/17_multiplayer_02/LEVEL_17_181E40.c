/* LEVEL_17:0x181E40 -- placement copy of LEVEL_16_18E7F8.c: placement copy of LEVEL_01_1DD2D0.c: runs func_184528 on each of the 2x3 records of a table, then func_184980 on the shared record and func_1849B0 with the argument and a fixed second one. */
extern char D_001B1CD0[];
extern char D_001B1D90[];
extern char D_00181828[];

extern void func_184528(void *p);
extern void func_184980(void *p);
extern void func_1849B0(void *first, void *second);

void func_181E40(void *a0)
{
    unsigned int i;
    unsigned int j;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++)
            func_184528(D_001B1CD0 + i * 0x60 + j * 0x20);
    }
    func_184980(D_001B1D90);
    func_1849B0(a0, D_00181828);
}
