extern void func_0AA470(void);

void func_0AA440(char *record)
{
    char *link;
    func_0AA470();
    link = record + 0xc;
    *(char **)(link + 4) = link;
    *(char **)(record + 0xc) = link;
}
