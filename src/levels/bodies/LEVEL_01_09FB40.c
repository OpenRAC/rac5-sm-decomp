extern void func_09FB70(void);

void func_09FB40(char *record)
{
    char *link;
    func_09FB70();
    link = record + 0xc;
    *(char **)(link + 4) = link;
    *(char **)(record + 0xc) = link;
}
