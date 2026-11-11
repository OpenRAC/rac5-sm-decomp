extern void func_01B888(void *, int, int, int);

void func_01B9B0(void *output, char *record)
{
    func_01B888(output, *(int *)(record + 0x14), *(int *)(record + 0x18), *(int *)(record + 0x1c));
}
