struct Entry
{
    char bytes[0xb4];
    int field;
};

extern char *D_00143EB0;

int func_000C90(int index)
{
    struct Entry *entry = (struct Entry *)(D_00143EB0 + index * 0x30);
    return entry->field;
}
