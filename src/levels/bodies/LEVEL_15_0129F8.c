extern unsigned char D_00177951;
extern char D_00177878[];
extern void func_079080(void *);

void func_0129F8(void)
{
    char *record;
    if (D_00177951 != 0) {
        record = D_00177878;
        do {
            func_079080(record);
            record += 0x68;
        } while (record < D_00177878 + 0xd0);
    }
}
