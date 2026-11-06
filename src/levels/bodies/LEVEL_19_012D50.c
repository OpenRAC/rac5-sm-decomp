extern unsigned char D_001DE651;
extern char D_001DE578[];
extern void func_086258(void *);

void func_012D50(void)
{
    char *record;
    if (D_001DE651 != 0) {
        record = D_001DE578;
        do {
            func_086258(record);
            record += 0x68;
        } while (record < D_001DE578 + 0xd0);
    }
}
