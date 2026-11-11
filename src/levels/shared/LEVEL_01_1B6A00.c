void func_1B6A00(char *object)
{
    char *place = *(char **)(object + 0x58) + 4;
    unsigned int index = 0;
    do {
        *(int *)place = -1;
        ++index;
        place += 0x14;
    } while (index < 5);
}
