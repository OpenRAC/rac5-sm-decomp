extern void func_09A5A0(void *, void *, int);

void func_11A670(char *record, unsigned int field30, void *context,
                 unsigned int field14, unsigned int field18,
                 unsigned int field1c, unsigned int field38,
                 unsigned int field20)
{
    func_09A5A0(record, context, 1);
    *(unsigned int *)(record + 0x30) = field30;
    *(unsigned int *)(record + 0x14) = field14;
    *(unsigned int *)(record + 0x18) = field18;
    *(unsigned int *)(record + 0x1c) = field1c;
    *(unsigned int *)(record + 0x38) = field38;
    *(unsigned int *)(record + 0x20) = field20;
}
