extern void func_09CE28(void);

void func_09CDF8(char *record)
{
    char *link;
    func_09CE28();
    link = record + 0xc;
    *(char **)(link + 4) = link;
    *(char **)(record + 0xc) = link;
}
