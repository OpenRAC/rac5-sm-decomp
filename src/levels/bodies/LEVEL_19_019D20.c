extern void func_019BF8(void *, int, int, int);

void func_019D20(void *output, char *record)
{
    func_019BF8(output, *(int *)(record + 0x14), *(int *)(record + 0x18), *(int *)(record + 0x1c));
}
