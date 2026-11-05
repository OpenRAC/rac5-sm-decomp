extern void func_01A398(void *, int, int, int);

void func_01A4C0(void *output, char *record)
{
    func_01A398(output, *(int *)(record + 0x14), *(int *)(record + 0x18), *(int *)(record + 0x1c));
}
