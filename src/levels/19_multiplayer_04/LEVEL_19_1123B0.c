extern char D_001D05F8[];
extern void func_1124B8(void);

char * func_1123B0(char *record)
{
    *(void **)(record + 0x14) = D_001D05F8;
    func_1124B8();
    *(int *)(record + 4) = 0;
    return record;
}
