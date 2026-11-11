extern void func_0A0C50(void);

void func_0A0C20(char *record)
{
    char *link;
    func_0A0C50();
    link = record + 0xc;
    *(char **)(link + 4) = link;
    *(char **)(record + 0xc) = link;
}
