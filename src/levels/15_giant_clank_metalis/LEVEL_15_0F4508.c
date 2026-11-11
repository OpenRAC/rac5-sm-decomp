extern char D_0016EEA8[];
extern void func_0F4610(void);

char * func_0F4508(char *record)
{
    *(void **)(record + 0x14) = D_0016EEA8;
    func_0F4610();
    *(int *)(record + 4) = 0;
    return record;
}
