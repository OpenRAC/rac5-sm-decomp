extern void func_163068(void *, void *);

void func_13A868(char *record, void *unused, void *value)
{
    *(unsigned int *)(record + 100) |= 0x200020u;
    func_163068(record, value);
}
