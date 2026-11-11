struct Entry
{
    char bytes[0xb4];
    int field;
};

extern char *D_001BFEC8;

int func_000FB0(int index)
{
    struct Entry *entry = (struct Entry *)(D_001BFEC8 + index * 0x30);
    return entry->field;
}
