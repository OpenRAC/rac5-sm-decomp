extern void func_0993F0(void);

void func_0993C0(char *record)
{
    char *link;
    func_0993F0();
    link = record + 0xc;
    *(char **)(link + 4) = link;
    *(char **)(record + 0xc) = link;
}
