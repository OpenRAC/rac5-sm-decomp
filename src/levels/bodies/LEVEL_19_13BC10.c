extern void func_15EF78(void *, void *);

void func_13BC10(char *record, void *unused, void *value)
{
    *(unsigned int *)(record + 100) |= 0x200020u;
    func_15EF78(record, value);
}
