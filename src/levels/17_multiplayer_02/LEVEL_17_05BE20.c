extern char D_001B7020[];
extern void func_05B8D8(char *, int, const void *);

void func_05BE20(char *item)
{
    func_05B8D8(item, *(int *)(item + 0x5a8), D_001B7020);
}
