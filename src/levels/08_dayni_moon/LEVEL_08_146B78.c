extern char D_002643A8[];
extern void func_146C80(void);

char * func_146B78(char *record)
{
    *(void **)(record + 0x14) = D_002643A8;
    func_146C80();
    *(int *)(record + 4) = 0;
    return record;
}
