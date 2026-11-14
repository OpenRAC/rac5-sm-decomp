/* LEVEL_01:0x136708 -- releases the handle held in the nested record and clears it. */
extern void func_080B38(char *record);

void func_136708(char *record)
{
    char *nested = *(char **)(record + 0x58);
    char *value = *(char **)(nested + 0x54);

    if (value != 0) {
        func_080B38(value);
        *(char **)(nested + 0x54) = 0;
    }
}
