extern void func_01AF08(void *, int, int, int);

void func_01B030(void *output, char *record)
{
    func_01AF08(output, *(int *)(record + 0x14), *(int *)(record + 0x18), *(int *)(record + 0x1c));
}
