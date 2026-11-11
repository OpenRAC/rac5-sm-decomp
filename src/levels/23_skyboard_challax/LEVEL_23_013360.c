extern unsigned char D_001FCC51;
extern char D_001FCB78[];
extern void func_08ABE0(void *);

void func_013360(void)
{
    char *record;
    if (D_001FCC51 != 0) {
        record = D_001FCB78;
        do {
            func_08ABE0(record);
            record += 0x68;
        } while (record < D_001FCB78 + 0xd0);
    }
}
