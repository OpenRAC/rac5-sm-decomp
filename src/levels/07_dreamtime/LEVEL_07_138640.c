extern char D_0022F428[];
extern void func_138748(void);

char * func_138640(char *record)
{
    *(void **)(record + 0x14) = D_0022F428;
    func_138748();
    *(int *)(record + 4) = 0;
    return record;
}
