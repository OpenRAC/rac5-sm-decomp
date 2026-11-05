extern void func_03DE90(char *, int, int);

void func_03DF60(char *item)
{
    func_03DE90(item, *(int *)(item + 0xfc8) + 1, 0);
}
