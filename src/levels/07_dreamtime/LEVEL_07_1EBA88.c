/* LEVEL_07:0x1EBA88 -- placement copy of LEVEL_16_18E7F8.c: placement copy of LEVEL_01_1DD2D0.c: runs func_1EE170 on each of the 2x3 records of a table, then func_1EE5C8 on the shared record and func_1EE5F8 with the argument and a fixed second one. */
extern char D_0021E478[];
extern char D_0021E538[];
extern char D_001EB470[];

extern void func_1EE170(void *p);
extern void func_1EE5C8(void *p);
extern int func_1EE5F8(void *first, void *second);

void func_1EBA88(void *a0)
{
    unsigned int i;
    unsigned int j;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++)
            func_1EE170(D_0021E478 + i * 0x60 + j * 0x20);
    }
    func_1EE5C8(D_0021E538);
    func_1EE5F8(a0, D_001EB470);
}
