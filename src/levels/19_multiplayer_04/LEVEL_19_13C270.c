extern void func_15EF78(void *, void *);

void func_13C270(char *record, void *unused, void *other)
{
    func_15EF78(record, other);
    *(unsigned int *)(record + 100) |= 0x200020u;
}
