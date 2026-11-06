extern void func_09E128(void);

void func_09E0F8(char *record)
{
    char *link;
    func_09E128();
    link = record + 0xc;
    *(char **)(link + 4) = link;
    *(char **)(record + 0xc) = link;
}
