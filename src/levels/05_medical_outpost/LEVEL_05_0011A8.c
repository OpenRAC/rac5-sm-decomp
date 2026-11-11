struct Entry
{
    char bytes[0xb4];
    int field;
};

extern char *D_001DE5C8;

int func_0011A8(int index)
{
    struct Entry *entry = (struct Entry *)(D_001DE5C8 + index * 0x30);
    return entry->field;
}
