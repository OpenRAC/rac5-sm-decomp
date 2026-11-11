extern void func_163068(void *, void *);

void func_13AEC8(char *record, void *unused, void *other)
{
    func_163068(record, other);
    *(unsigned int *)(record + 100) |= 0x200020u;
}
