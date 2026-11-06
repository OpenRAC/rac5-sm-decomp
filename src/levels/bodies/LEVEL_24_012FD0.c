extern unsigned char D_001FB6D1;
extern char D_001FB5F8[];
extern void func_08DFC0(void *);

void func_012FD0(void)
{
    char *record;
    if (D_001FB6D1 != 0) {
        record = D_001FB5F8;
        do {
            func_08DFC0(record);
            record += 0x68;
        } while (record < D_001FB5F8 + 0xd0);
    }
}
