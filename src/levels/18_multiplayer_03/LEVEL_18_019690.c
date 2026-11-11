extern void func_019540(void *, int, int, int);

void func_019690(void *output, char *record)
{
    func_019540(output, *(int *)(record + 0x20), *(int *)(record + 0x24), *(int *)(record + 0x28));
}
