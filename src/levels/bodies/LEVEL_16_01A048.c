extern void func_019EF8(void *, int, int, int);

void func_01A048(void *output, char *record)
{
    func_019EF8(output, *(int *)(record + 0x20), *(int *)(record + 0x24), *(int *)(record + 0x28));
}
