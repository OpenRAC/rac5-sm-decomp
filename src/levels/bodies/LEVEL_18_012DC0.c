extern unsigned char D_001DE851;
extern char D_001DE778[];
extern void func_0856F0(void *);

void func_012DC0(void)
{
    char *record;
    if (D_001DE851 != 0) {
        record = D_001DE778;
        do {
            func_0856F0(record);
            record += 0x68;
        } while (record < D_001DE778 + 0xd0);
    }
}
