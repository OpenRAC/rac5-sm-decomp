extern unsigned char D_001CF7D1;
extern char D_001CF6F8[];
extern void func_0867E8(void *);

void func_012D50(void)
{
    char *record;
    if (D_001CF7D1 != 0) {
        record = D_001CF6F8;
        do {
            func_0867E8(record);
            record += 0x68;
        } while (record < D_001CF6F8 + 0xd0);
    }
}
