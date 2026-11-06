/* LEVEL_01.REL:0x02ACC0: Ghidra body 148 bytes.
 * Pinned pure C links 152 bytes and first differs at +7.
 * Recheck signed sentinel and byte-table loop lifetimes. No matching credit.
 */
extern char *func_085290(void);

unsigned int func_02ACC0(char *record)
{
    unsigned int result = 0xffffffffu;
    if (*(int *)(record + 4) != -1) {
        char *context = func_085290();
        char *table = *(char **)(context + 0x1c);
        unsigned int count = *(unsigned int *)(table + 0x14);
        unsigned int low = 0x100;
        unsigned int high = 0xffffffffu;
        unsigned int index = 0;
        if (count != 0) {
            unsigned char *cursor = *(unsigned char **)(table + 0x18) + 3;
            do {
                unsigned int value = *cursor;
                index++;
                if ((*cursor & 0x10) == 0) {
                    if (value < low)
                        low = value;
                    if ((int)high < (int)value)
                        high = value;
                }
                cursor += 0x0c;
            } while (index < count);
        }
        if (low != high)
            result = high;
    }
    return result;
}
