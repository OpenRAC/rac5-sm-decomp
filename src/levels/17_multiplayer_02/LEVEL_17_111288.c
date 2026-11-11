extern char D_001C2878[];
extern void func_111390(void);

char * func_111288(char *record)
{
    *(void **)(record + 0x14) = D_001C2878;
    func_111390();
    *(int *)(record + 4) = 0;
    return record;
}
