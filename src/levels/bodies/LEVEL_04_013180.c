extern unsigned char D_00249FD1;
extern char D_00249EF8[];
extern void func_0982B8(void *);

void func_013180(void)
{
    char *record;
    if (D_00249FD1 != 0) {
        record = D_00249EF8;
        do {
            func_0982B8(record);
            record += 0x68;
        } while (record < D_00249EF8 + 0xd0);
    }
}
