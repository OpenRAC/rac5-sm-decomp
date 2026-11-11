extern void func_138490(char *, unsigned char, char *);

void func_1383E8(char *item)
{
    char *payload = *(char **)(item + 0x58);
    func_138490(item, *(unsigned char *)(payload + 0x11), payload);
}
