/* LEVEL_05.REL:0x09EAE0: walk variable-size entries and return the selected match. */
unsigned short *func_09EAE0(char *data, unsigned int type, int ordinal)
{
    char *cursor;
    char *end;
    if (data == 0)
        return 0;
    end = data + *(int *)(data + 4);
    cursor = data + *(int *)(data + 8);
    while (cursor < end) {
        if (type == 0 || *(unsigned short *)cursor == type) {
            ordinal--;
            if (ordinal == -1)
                return (unsigned short *)cursor;
        }
        cursor += *(int *)(cursor + 4);
    }
    return 0;
}
