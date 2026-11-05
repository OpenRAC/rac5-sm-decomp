extern void func_01AE20(void *, int, int, int);

void func_01AF48(void *output, char *record)
{
    func_01AE20(output, *(int *)(record + 0x14), *(int *)(record + 0x18), *(int *)(record + 0x1c));
}
