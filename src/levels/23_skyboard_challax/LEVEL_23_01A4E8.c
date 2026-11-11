extern void func_01A398(void *, int, int, int);

void func_01A4E8(void *output, char *record)
{
    func_01A398(output, *(int *)(record + 0x20), *(int *)(record + 0x24), *(int *)(record + 0x28));
}
