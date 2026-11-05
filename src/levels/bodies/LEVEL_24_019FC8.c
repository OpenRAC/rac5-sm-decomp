extern void func_019E78(void *, int, int, int);

void func_019FC8(void *output, char *record)
{
    func_019E78(output, *(int *)(record + 0x20), *(int *)(record + 0x24), *(int *)(record + 0x28));
}
