extern char D_0022F6A8[];
extern void func_13BAF8(void);

char * func_13B9F0(char *record)
{
    *(void **)(record + 0x14) = D_0022F6A8;
    func_13BAF8();
    *(int *)(record + 4) = 0;
    return record;
}
