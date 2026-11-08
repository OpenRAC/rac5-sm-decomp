extern int func_01FD00(int category, int selector);

void func_01EC60(char *item, int category)
{
    func_01FD00(category, *(int *)(item + 0xf8));
}
