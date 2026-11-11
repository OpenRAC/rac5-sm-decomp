extern unsigned char D_0021C551;
extern char D_0021C478[];
extern void func_08DE10(void *);

void func_013350(void)
{
    char *record;
    if (D_0021C551 != 0) {
        record = D_0021C478;
        do {
            func_08DE10(record);
            record += 0x68;
        } while (record < D_0021C478 + 0xd0);
    }
}
