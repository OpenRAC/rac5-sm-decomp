extern void func_01A088(void *, int, int, int);

void func_01A1B0(void *output, char *record)
{
    func_01A088(output, *(int *)(record + 0x14), *(int *)(record + 0x18), *(int *)(record + 0x1c));
}
