extern void func_04DA30(char *, int, int);

void func_04DB00(char *item)
{
    func_04DA30(item, *(int *)(item + 0xfc8) + 1, 0);
}
