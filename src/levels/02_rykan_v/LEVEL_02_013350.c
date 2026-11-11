extern unsigned char D_00246CD1;
extern char D_00246BF8[];
extern void func_09B890(void *);

void func_013350(void)
{
    char *record;
    if (D_00246CD1 != 0) {
        record = D_00246BF8;
        do {
            func_09B890(record);
            record += 0x68;
        } while (record < D_00246BF8 + 0xd0);
    }
}
