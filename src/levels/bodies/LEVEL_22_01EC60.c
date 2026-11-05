extern void func_01FD00(void *, int);

void func_01EC60(char *item, void *other)
{
    func_01FD00(other, *(int *)(item + 0xf8));
}
