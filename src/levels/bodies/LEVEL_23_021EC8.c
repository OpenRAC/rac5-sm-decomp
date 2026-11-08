extern int func_022F68(int category, int selector);

void func_021EC8(char *item, int category)
{
    func_022F68(category, *(int *)(item + 0xf8));
}
