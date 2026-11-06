extern char D_002095A8[];
extern void func_12BE18(void);

char * func_12BD10(char *record)
{
    *(void **)(record + 0x14) = D_002095A8;
    func_12BE18();
    *(int *)(record + 4) = 0;
    return record;
}
