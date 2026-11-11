extern void func_17F710(char *, int);

void func_17F648(char *item, int value)
{
    *(int *)(*(char **)(item + 0x58) + 0x5c) = value;
    func_17F710(item, 1);
}
