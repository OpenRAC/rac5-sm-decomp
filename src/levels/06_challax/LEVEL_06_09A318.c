extern void func_09A348(void);

void func_09A318(char *record)
{
    char *link;
    func_09A348();
    link = record + 0xc;
    *(char **)(link + 4) = link;
    *(char **)(record + 0xc) = link;
}
