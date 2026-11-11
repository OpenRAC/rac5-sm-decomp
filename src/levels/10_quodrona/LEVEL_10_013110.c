extern unsigned char D_00238BD1;
extern char D_00238AF8[];
extern void func_095530(void *);

void func_013110(void)
{
    char *record;
    if (D_00238BD1 != 0) {
        record = D_00238AF8;
        do {
            func_095530(record);
            record += 0x68;
        } while (record < D_00238AF8 + 0xd0);
    }
}
