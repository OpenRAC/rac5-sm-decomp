extern int func_024EC8(int category, int selector);

void func_023D20(char *item, int category)
{
    func_024EC8(category, *(int *)(item + 0xf8));
}
