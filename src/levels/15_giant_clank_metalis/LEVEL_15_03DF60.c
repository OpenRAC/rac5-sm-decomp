extern int func_03DE90(char *o, int id, int force);

void func_03DF60(char *item)
{
    func_03DE90(item, *(int *)(item + 0xfc8) + 1, 0);
}
