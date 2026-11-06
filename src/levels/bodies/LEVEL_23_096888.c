extern void func_0968B8(void);

void func_096888(char *record)
{
    char *link;
    func_0968B8();
    link = record + 0xc;
    *(char **)(link + 4) = link;
    *(char **)(record + 0xc) = link;
}
