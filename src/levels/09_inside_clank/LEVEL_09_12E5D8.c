extern char D_00204328[];
extern void func_12E6E0(void);

char * func_12E5D8(char *record)
{
    *(void **)(record + 0x14) = D_00204328;
    func_12E6E0();
    *(int *)(record + 4) = 0;
    return record;
}
