extern void func_04C070(char *, int, int);

void func_04C140(char *item)
{
    func_04C070(item, *(int *)(item + 0xfc8) + 1, 0);
}
