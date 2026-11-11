extern void func_13EAF8(void *obj);

void func_13EE60(unsigned char *record)
{
    unsigned char *base = *(unsigned char **)(record + 0x58);
    if (base[0x9c] != 0)
        base[0x9c] = 0;
    func_13EAF8(record);
}
