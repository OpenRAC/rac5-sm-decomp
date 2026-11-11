extern void func_019EF8(void *, int, int, int);

void func_01A020(void *output, char *record)
{
    func_019EF8(output, *(int *)(record + 0x14), *(int *)(record + 0x18), *(int *)(record + 0x1c));
}
