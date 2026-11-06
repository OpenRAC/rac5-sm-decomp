extern char D_002340A8[];
extern void func_141BC8(void);

char * func_141AC0(char *record)
{
    *(void **)(record + 0x14) = D_002340A8;
    func_141BC8();
    *(int *)(record + 4) = 0;
    return record;
}
