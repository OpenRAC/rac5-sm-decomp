extern char D_00233628[];
extern void func_133B10(void);

char * func_133A08(char *record)
{
    *(void **)(record + 0x14) = D_00233628;
    func_133B10();
    *(int *)(record + 4) = 0;
    return record;
}
