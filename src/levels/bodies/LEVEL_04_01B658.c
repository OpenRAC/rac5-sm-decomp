extern void func_01B508(void *, int, int, int);

void func_01B658(void *output, char *record)
{
    func_01B508(output, *(int *)(record + 0x20), *(int *)(record + 0x24), *(int *)(record + 0x28));
}
