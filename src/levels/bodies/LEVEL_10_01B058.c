extern void func_01AF08(void *, int, int, int);

void func_01B058(void *output, char *record)
{
    func_01AF08(output, *(int *)(record + 0x20), *(int *)(record + 0x24), *(int *)(record + 0x28));
}
