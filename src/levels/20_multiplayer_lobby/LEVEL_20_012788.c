extern unsigned char D_00135E51;
extern char D_00135D78[];
extern void func_0735E0(void *);

void func_012788(void)
{
    char *record;
    if (D_00135E51 != 0) {
        record = D_00135D78;
        do {
            func_0735E0(record);
            record += 0x68;
        } while (record < D_00135D78 + 0xd0);
    }
}
