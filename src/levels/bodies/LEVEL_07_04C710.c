extern void func_04C640(char *, int, int);

void func_04C710(char *item)
{
    func_04C640(item, *(int *)(item + 0xfc8) + 1, 0);
}
