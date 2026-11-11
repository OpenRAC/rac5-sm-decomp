extern int func_04A2D0(char *o, int id, int force);

void func_04A3A0(char *item)
{
    func_04A2D0(item, *(int *)(item + 0xfc8) + 1, 0);
}
