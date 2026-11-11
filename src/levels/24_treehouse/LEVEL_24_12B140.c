extern char D_001EB4A8[];
extern void func_12B248(void);

char * func_12B140(char *record)
{
    *(void **)(record + 0x14) = D_001EB4A8;
    func_12B248();
    *(int *)(record + 4) = 0;
    return record;
}
