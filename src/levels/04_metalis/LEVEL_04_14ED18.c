extern void func_14EDC0(char *, unsigned char, char *);

void func_14ED18(char *item)
{
    char *payload = *(char **)(item + 0x58);
    func_14EDC0(item, *(unsigned char *)(payload + 0x11), payload);
}
