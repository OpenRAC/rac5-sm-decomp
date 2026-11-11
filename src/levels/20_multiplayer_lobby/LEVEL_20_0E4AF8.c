extern char D_00130468[];
extern void func_0E4C00(void);

char * func_0E4AF8(char *record)
{
    *(void **)(record + 0x14) = D_00130468;
    func_0E4C00();
    *(int *)(record + 4) = 0;
    return record;
}
