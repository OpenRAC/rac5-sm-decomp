extern int func_023E60(int category, int selector);

void func_022CB8(char *item, int category)
{
    func_023E60(category, *(int *)(item + 0xf8));
}
