/* LEVEL_01.REL:0x0A34F8: reviewed 180-byte candidate.
 * pinned C with gnu-ee-trial links 172 bytes; first differs at +20.
 * Retry: Change the measured source/compiler hypothesis; representative still
 * differs.
 * No matching credit.
 */
extern char D_29F008[];
extern unsigned int *func_0A0850(char *object, int unused0, int unused1);
extern char *func_0A07C8(char *object);

unsigned int func_0A34F8(int index, unsigned int slot, unsigned int value)
{
    char *object = D_29F008 + index * 100;
    unsigned int *values = func_0A0850(object, 0, 0);
    unsigned int result = 0;
    char *entry = func_0A07C8(object);
    if (entry != 0 && *(unsigned short *)(entry + 4) == 3) {
        result = slot < *(unsigned short *)(entry + 8);
        if (result)
            values[slot] = value;
    }
    return result;
}
