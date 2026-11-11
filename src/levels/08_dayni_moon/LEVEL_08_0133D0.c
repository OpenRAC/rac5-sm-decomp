extern unsigned char D_0027EA51;
extern char D_0027E978[];
extern void func_09D0E0(void *);

void func_0133D0(void)
{
    char *record;
    if (D_0027EA51 != 0) {
        record = D_0027E978;
        do {
            func_09D0E0(record);
            record += 0x68;
        } while (record < D_0027E978 + 0xd0);
    }
}
