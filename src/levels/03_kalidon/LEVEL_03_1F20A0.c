/* LEVEL_03:0x1F20A0 -- placement copy of LEVEL_16_18E7F8.c: placement copy of LEVEL_01_1DD2D0.c: runs func_1F4788 on each of the 2x3 records of a table, then func_1F4BE0 on the shared record and func_1F4C10 with the argument and a fixed second one. */
extern char D_00222670[];
extern char D_00222730[];
extern char D_001F1A88[];

extern void func_1F4788(void *p);
extern void func_1F4BE0(void *p);
extern int func_1F4C10(void *first, void *second);

void func_1F20A0(void *a0)
{
    unsigned int i;
    unsigned int j;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++)
            func_1F4788(D_00222670 + i * 0x60 + j * 0x20);
    }
    func_1F4BE0(D_00222730);
    func_1F4C10(a0, D_001F1A88);
}
