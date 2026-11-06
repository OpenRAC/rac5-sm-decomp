extern void func_1569F8(void *, void *);

void func_13A498(char *record, void *unused, void *value)
{
    *(unsigned int *)(record + 100) |= 0x200020u;
    func_1569F8(record, value);
}
