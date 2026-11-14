/* LEVEL_16:0x16F220 -- frees the slot the object's state names in its owner's table, decrementing the active count when it was in use, then clears it. */
extern void *memset(void *p, int v, unsigned int n);

void func_16F220(char *object)
{
    char *state;
    char *base;
    char *s;

    state = *(char **)(object + 0x58);
    base = *(char **)(*(char **)(*(char **)(object + 0x54) + 0x30) + 0x58);
    s = base + *(unsigned char *)(state + 0x68) * 0x1C;
    if (*(unsigned char *)(s + 0x18) & 1) {
        base[0x408]--;
    }
    memset(s, 0, 0x1C);
}
