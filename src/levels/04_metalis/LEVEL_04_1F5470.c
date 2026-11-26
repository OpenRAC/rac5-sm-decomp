/* LEVEL_04:0x1F5470 -- placement copy of LEVEL_16_18E7F8.c: placement copy of LEVEL_01_1DD2D0.c: runs func_1F7B58 on each of the 2x3 records of a table, then func_1F7FB0 on the shared record and func_1F7FE0 with the argument and a fixed second one. */
extern char D_002230B8[];
extern char D_00223178[];
extern char D_001F4E58[];

extern void func_1F7B58(void *p);
extern void func_1F7FB0(void *p);
extern int func_1F7FE0(void *first, void *second);

void func_1F5470(void *a0)
{
    unsigned int i;
    unsigned int j;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++)
            func_1F7B58(D_002230B8 + i * 0x60 + j * 0x20);
    }
    func_1F7FB0(D_00223178);
    func_1F7FE0(a0, D_001F4E58);
}
