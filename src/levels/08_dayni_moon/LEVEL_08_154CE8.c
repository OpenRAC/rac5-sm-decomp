/* LEVEL_08:0x154CE8 -- placement copy of LEVEL_04_14FC50.c. */
extern unsigned int D_264470;
extern char *D_250370[];
extern int func_154A20(unsigned int value);
extern unsigned char func_154970(char *object);
void *func_154CE8(char *object, int index)
{
    char *record = *(char **)(object + 0x58);
    char *table;
    int code;
    if (index < 0)
        index = *(unsigned char *)(record + 0x11);
    code = func_154A20(D_264470);
    table = D_250370[code];
    table += func_154970(object) * 4;
    return *(char **)(table + 0x24) + index;
}
