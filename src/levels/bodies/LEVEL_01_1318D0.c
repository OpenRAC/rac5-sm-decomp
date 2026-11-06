extern void *memset(void *, int, unsigned int);

void func_1318D0(unsigned int *record)
{
    memset(record + 1, 0, 0x80);
    memset(record + 0x21, 0, 0x80);
    *record = 0;
}
