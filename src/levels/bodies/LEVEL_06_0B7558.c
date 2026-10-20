extern void *memset(void *, int, unsigned int);

void func_clear_record(int *record)
{
    *(int *)((char *)record + 0x20) = 0;
    memset(record, 0, 0x20);
}
