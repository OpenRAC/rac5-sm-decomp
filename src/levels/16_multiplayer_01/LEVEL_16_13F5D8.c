extern void func_15D478(void *, void *);

void func_13F5D8(char *record, void *unused, void *other)
{
    func_15D478(record, other);
    *(unsigned int *)(record + 100) |= 0x200020u;
}
