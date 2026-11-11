/* LEVEL_09:0x181F58 -- for objects of kind 0 or 1 whose record has both words set, arms the countdown byte (0x32), clears the 0x18-byte state block and returns 1; otherwise returns 0. */
extern void *memset(void *s, int c, unsigned int n);

int func_181F58(char *object)
{
    char *record = *(char **)(object + 0x54);
    char *state = *(char **)(object + 0x58);

    if (*(unsigned char *)(object + 0x45) < 2) {
        if (*(int *)(record + 0xC) == 0) {
            return 0;
        }
        if (*(int *)(record + 8) != 0) {
            *(unsigned char *)(object + 0x76) = 0x32;
            memset(state, 0, 0x18);
            return 1;
        }
    }
    return 0;
}
