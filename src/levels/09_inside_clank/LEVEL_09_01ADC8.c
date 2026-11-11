extern void func_01AC78(void *, int, int, int);

void func_01ADC8(void *output, char *record)
{
    func_01AC78(output, *(int *)(record + 0x20), *(int *)(record + 0x24), *(int *)(record + 0x28));
}
