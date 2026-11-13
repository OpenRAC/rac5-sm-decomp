/* LEVEL_24:0x139320 -- placement copy of LEVEL_04_14FC50.c. */
extern unsigned int D_1EB570;
extern char *D_1D8130[];
extern int func_139058(unsigned int value);
extern unsigned char func_138FA8(char *object);
void *func_139320(char *object, int index)
{
    char *record = *(char **)(object + 0x58);
    char *table;
    int code;
    if (index < 0)
        index = *(unsigned char *)(record + 0x11);
    code = func_139058(D_1EB570);
    table = D_1D8130[code];
    table += func_138FA8(object) * 4;
    return *(char **)(table + 0x24) + index;
}
