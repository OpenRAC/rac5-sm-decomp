struct Entry
{
    char bytes[0xb4];
    int field;
};

extern char *D_0018E2CC;

int func_000DA0(int index)
{
    struct Entry *entry = (struct Entry *)(D_0018E2CC + index * 0x30);
    return entry->field;
}
