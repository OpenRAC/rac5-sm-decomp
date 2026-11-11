extern void func_0A6460(void);

void func_0A6430(char *record)
{
    char *link;
    func_0A6460();
    link = record + 0xc;
    *(char **)(link + 4) = link;
    *(char **)(record + 0xc) = link;
}
