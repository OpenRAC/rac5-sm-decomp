/* LEVEL_21.REL:0x080E90: walk variable-size entries and return the selected match. */
unsigned short *func_080E90(char *data, unsigned int type, int ordinal)
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
