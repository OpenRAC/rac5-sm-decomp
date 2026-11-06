extern void func_0E9900(void *, void *, int);

void func_0E98D0(void *a, void *b, char *record)
{
    int value = record == 0 ? 0 :
        *(int *)(*(char **)(record + 0x40) + 0x24);
    func_0E9900(a, b, value);
}
