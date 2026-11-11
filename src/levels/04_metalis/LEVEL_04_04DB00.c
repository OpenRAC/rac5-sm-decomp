extern int func_04DA30(char *o, int id, int force);

void func_04DB00(char *item)
{
    func_04DA30(item, *(int *)(item + 0xfc8) + 1, 0);
}
