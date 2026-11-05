/* Returns the integral record width including its 16-unit margin. */
int func_0125F0(const void *record)
{
    return *(const int *)((const char *)record + 0x48) + 0x10;
}
