extern void func_1569F8(void *, void *);

void func_13AFE8(char *record, void *unused, void *other)
{
    func_1569F8(record, other);
    *(unsigned int *)(record + 100) |= 0x200020u;
}
