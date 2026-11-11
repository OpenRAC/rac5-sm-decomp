extern char D_0021A728[];
extern void func_135748(void);

char * func_135640(char *record)
{
    *(void **)(record + 0x14) = D_0021A728;
    func_135748();
    *(int *)(record + 4) = 0;
    return record;
}
