extern void func_019BF8(void *, int, int, int);

void func_019D48(void *output, char *record)
{
    func_019BF8(output, *(int *)(record + 0x20), *(int *)(record + 0x24), *(int *)(record + 0x28));
}
