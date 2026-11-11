extern char D_001C5120[];
extern void func_05A9B0(char *, int, const void *);

void func_05AEF8(char *item)
{
    func_05A9B0(item, *(int *)(item + 0x5a8), D_001C5120);
}
