/* LEVEL_06:0x1CAB18 -- placement copy of LEVEL_16_18E7F8.c: placement copy of LEVEL_01_1DD2D0.c: runs func_1CD200 on each of the 2x3 records of a table, then func_1CD658 on the shared record and func_1CD688 with the argument and a fixed second one. */
extern char D_001F8658[];
extern char D_001F8718[];
extern char D_001CA500[];

extern void func_1CD200(void *p);
extern void func_1CD658(void *p);
extern int func_1CD688(void *first, void *second);

void func_1CAB18(void *a0)
{
    unsigned int i;
    unsigned int j;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++)
            func_1CD200(D_001F8658 + i * 0x60 + j * 0x20);
    }
    func_1CD658(D_001F8718);
    func_1CD688(a0, D_001CA500);
}
