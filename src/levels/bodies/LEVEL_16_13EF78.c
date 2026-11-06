extern void func_15D478(void *, void *);

void func_13EF78(char *record, void *unused, void *value)
{
    *(unsigned int *)(record + 100) |= 0x200020u;
    func_15D478(record, value);
}
