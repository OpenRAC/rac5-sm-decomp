struct Entry
{
    char bytes[0xb4];
    int field;
};

extern char *D_00237DC8;

int func_0011A8(int index)
{
    struct Entry *entry = (struct Entry *)(D_00237DC8 + index * 0x30);
    return entry->field;
}
