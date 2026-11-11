extern void func_153E58(char *, unsigned char, char *);

void func_153DB0(char *item)
{
    char *payload = *(char **)(item + 0x58);
    func_153E58(item, *(unsigned char *)(payload + 0x11), payload);
}
