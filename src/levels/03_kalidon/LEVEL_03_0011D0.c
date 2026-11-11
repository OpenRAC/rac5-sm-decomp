struct Entry
{
    char bytes[0xb4];
    int field;
};

extern char *D_002078C8;

int func_0011D0(int index)
{
    struct Entry *entry = (struct Entry *)(D_002078C8 + index * 0x30);
    return entry->field;
}
