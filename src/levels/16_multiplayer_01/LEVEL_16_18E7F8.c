/* LEVEL_16:0x18E7F8 -- placement copy of LEVEL_01_1DD2D0.c: runs func_190EE0 on each of the 2x3 records of a table, then func_191338 on the shared record and func_191368 with the argument and a fixed second one. */
extern char D_001BE7F8[];
extern char D_001BE8B8[];
extern char D_0018E1E0[];

extern void func_190EE0(void *p);
extern void func_191338(void *p);
extern void func_191368(void *first, void *second);

void func_18E7F8(void *a0)
{
    unsigned int i;
    unsigned int j;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++)
            func_190EE0(D_001BE7F8 + i * 0x60 + j * 0x20);
    }
    func_191338(D_001BE8B8);
    func_191368(a0, D_0018E1E0);
}
