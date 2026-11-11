extern char D_001ED8A8[];
extern void func_126EC0(void);

char * func_126DB8(char *record)
{
    *(void **)(record + 0x14) = D_001ED8A8;
    func_126EC0();
    *(int *)(record + 4) = 0;
    return record;
}
