/* LEVEL_09:0x1C5A38 -- placement copy of LEVEL_16_18E7F8.c: placement copy of LEVEL_01_1DD2D0.c: runs func_1C8120 on each of the 2x3 records of a table, then func_1C8578 on the shared record and func_1C85A8 with the argument and a fixed second one. */
extern char D_001F3420[];
extern char D_001F34E0[];
extern char D_001C5420[];

extern void func_1C8120(void *p);
extern void func_1C8578(void *p);
extern int func_1C85A8(void *first, void *second);

void func_1C5A38(void *a0)
{
    unsigned int i;
    unsigned int j;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++)
            func_1C8120(D_001F3420 + i * 0x60 + j * 0x20);
    }
    func_1C8578(D_001F34E0);
    func_1C85A8(a0, D_001C5420);
}
