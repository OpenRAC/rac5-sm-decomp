extern void func_01F230(void *, int);

void func_01E1A8(char *item, void *other)
{
    func_01F230(other, *(int *)(item + 0xf8));
}
