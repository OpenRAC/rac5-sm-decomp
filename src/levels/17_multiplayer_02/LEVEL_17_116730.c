extern void func_116760(void *, void *, int);

void func_116730(void *a, void *b, char *record, int c)
{
    int value = record == 0 ? 0 :
        *(int *)(*(char **)(record + 0x40) + 0x24);
    func_116760(a, b, value);
}
