extern unsigned int D_234170;
extern char *D_2208D0[];
extern int func_14F988(unsigned int value);
extern unsigned char func_14F8D8(char *object);
void *func_14FC50(char *object, int index)
{
    char *record = *(char **)(object + 0x58);
    char *table;
    int code;
    if (index < 0)
        index = *(unsigned char *)(record + 0x11);
    code = func_14F988(D_234170);
    table = D_2208D0[code];
    table += func_14F8D8(object) * 4;
    return *(char **)(table + 0x24) + index;
}
