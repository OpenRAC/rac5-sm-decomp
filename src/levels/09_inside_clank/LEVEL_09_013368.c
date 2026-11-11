extern unsigned char D_00216F51;
extern char D_00216E78[];
extern void func_091918(void *);

void func_013368(void)
{
    char *record;
    if (D_00216F51 != 0) {
        record = D_00216E78;
        do {
            func_091918(record);
            record += 0x68;
        } while (record < D_00216E78 + 0xd0);
    }
}
