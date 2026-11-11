extern int func_01F590(void *owner, int id);

void func_01E490(char *item, void *other)
{
    func_01F590(other, *(int *)(item + 0xf8));
}
