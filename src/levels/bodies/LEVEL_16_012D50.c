extern unsigned char D_001DE4D1;
extern char D_001DE3F8[];
extern void func_085DA8(void *);

void func_012D50(void)
{
    char *record;
    if (D_001DE4D1 != 0) {
        record = D_001DE3F8;
        do {
            func_085DA8(record);
            record += 0x68;
        } while (record < D_001DE3F8 + 0xd0);
    }
}
