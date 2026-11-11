extern unsigned char D_002450D1;
extern char D_00244FF8[];
extern void func_097048(void *);

void func_013368(void)
{
    char *record;
    if (D_002450D1 != 0) {
        record = D_00244FF8;
        do {
            func_097048(record);
            record += 0x68;
        } while (record < D_00244FF8 + 0xd0);
    }
}
