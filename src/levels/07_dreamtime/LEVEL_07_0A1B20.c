extern void func_0A1B50(void);

void func_0A1B20(char *record)
{
    char *link;
    func_0A1B50();
    link = record + 0xc;
    *(char **)(link + 4) = link;
    *(char **)(record + 0xc) = link;
}
