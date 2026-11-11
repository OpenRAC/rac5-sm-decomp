extern unsigned char D_0021B4D1;
extern char D_0021B3F8[];
extern void func_0928B8(void *);

void func_013368(void)
{
    char *record;
    if (D_0021B4D1 != 0) {
        record = D_0021B3F8;
        do {
            func_0928B8(record);
            record += 0x68;
        } while (record < D_0021B3F8 + 0xd0);
    }
}
