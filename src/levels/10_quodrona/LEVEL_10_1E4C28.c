/* LEVEL_10:0x1E4C28 -- placement copy of LEVEL_16_18E7F8.c: placement copy of LEVEL_01_1DD2D0.c: runs func_1E7310 on each of the 2x3 records of a table, then func_1E7768 on the shared record and func_1E7798 with the argument and a fixed second one. */
extern char D_00212728[];
extern char D_002127E8[];
extern char D_001E4610[];

extern void func_1E7310(void *p);
extern void func_1E7768(void *p);
extern int func_1E7798(void *first, void *second);

void func_1E4C28(void *a0)
{
    unsigned int i;
    unsigned int j;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++)
            func_1E7310(D_00212728 + i * 0x60 + j * 0x20);
    }
    func_1E7768(D_002127E8);
    func_1E7798(a0, D_001E4610);
}
