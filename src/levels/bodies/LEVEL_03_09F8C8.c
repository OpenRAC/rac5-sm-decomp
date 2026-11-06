extern void func_09F8F8(void);

void func_09F8C8(char *record)
{
    char *link;
    func_09F8F8();
    link = record + 0xc;
    *(char **)(link + 4) = link;
    *(char **)(record + 0xc) = link;
}
