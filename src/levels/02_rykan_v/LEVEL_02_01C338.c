extern void func_01C1E8(void *, int, int, int);

void func_01C338(void *output, char *record)
{
    func_01C1E8(output, *(int *)(record + 0x20), *(int *)(record + 0x24), *(int *)(record + 0x28));
}
