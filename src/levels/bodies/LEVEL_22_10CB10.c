extern char D_00177BA8[];
extern void func_10CC18(void);

char * func_10CB10(char *record)
{
    *(void **)(record + 0x14) = D_00177BA8;
    func_10CC18();
    *(int *)(record + 4) = 0;
    return record;
}
