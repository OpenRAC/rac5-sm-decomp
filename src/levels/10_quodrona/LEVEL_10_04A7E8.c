extern int func_04A718(char *o, int id, int force);

void func_04A7E8(char *item)
{
    func_04A718(item, *(int *)(item + 0xfc8) + 1, 0);
}
