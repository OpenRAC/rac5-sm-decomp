extern char D_001C0198[];
extern void func_05B8D8(char *, int, const void *);

void func_05BDF8(char *item)
{
    func_05B8D8(item, *(int *)(item + 0x5a4), D_001C0198);
}
