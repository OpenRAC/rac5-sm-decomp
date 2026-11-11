extern void func_01A088(void *, int, int, int);

void func_01A1D8(void *output, char *record)
{
    func_01A088(output, *(int *)(record + 0x20), *(int *)(record + 0x24), *(int *)(record + 0x28));
}
