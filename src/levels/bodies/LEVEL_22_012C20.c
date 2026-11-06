extern unsigned char D_001813D1;
extern char D_001812F8[];
extern void func_085F90(void *);

void func_012C20(void)
{
    char *record;
    if (D_001813D1 != 0) {
        record = D_001812F8;
        do {
            func_085F90(record);
            record += 0x68;
        } while (record < D_001812F8 + 0xd0);
    }
}
