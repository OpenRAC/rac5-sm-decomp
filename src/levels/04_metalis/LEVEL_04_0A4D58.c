extern void func_0A4D88(void);

void func_0A4D58(char *record)
{
    char *link;
    func_0A4D88();
    link = record + 0xc;
    *(char **)(link + 4) = link;
    *(char **)(record + 0xc) = link;
}
