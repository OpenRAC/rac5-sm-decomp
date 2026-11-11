extern unsigned char D_0022F7D1;
extern char D_0022F6F8[];
extern void func_0951C0(void *);

void func_013368(void)
{
    char *record;
    if (D_0022F7D1 != 0) {
        record = D_0022F6F8;
        do {
            func_0951C0(record);
            record += 0x68;
        } while (record < D_0022F6F8 + 0xd0);
    }
}
