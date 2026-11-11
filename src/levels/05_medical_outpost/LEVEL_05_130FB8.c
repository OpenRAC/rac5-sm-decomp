extern char D_00209628[];
extern void func_1310C0(void);

char * func_130FB8(char *record)
{
    *(void **)(record + 0x14) = D_00209628;
    func_1310C0();
    *(int *)(record + 4) = 0;
    return record;
}
