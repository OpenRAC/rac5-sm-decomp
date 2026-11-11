extern char D_001CF3F8[];
extern void func_111E18(void);

char * func_111D10(char *record)
{
    *(void **)(record + 0x14) = D_001CF3F8;
    func_111E18();
    *(int *)(record + 4) = 0;
    return record;
}
