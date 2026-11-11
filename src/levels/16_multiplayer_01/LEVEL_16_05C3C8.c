extern char D_001CCD18[];
extern void func_05BEA8(char *, int, const void *);

void func_05C3C8(char *item)
{
    func_05BEA8(item, *(int *)(item + 0x5a4), D_001CCD18);
}
