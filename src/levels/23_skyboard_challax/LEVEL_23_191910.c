/* LEVEL_23:0x191910 -- placement copy of LEVEL_03_1C2EC8.c: stores a new state byte in the object and updates the matching flag and timing hook. */
extern void func_073F58(char *o, int v, float x);
extern void func_074128(char *o, int v, int z, int one, float x, float y);

void func_191910(char *o, unsigned int st)
{
    char *t;
    unsigned int s8;

    s8 = st & 0xFF;
    t = *(char **)(o + 0x58);
    if (*(int *)(t + 0xC4) == (int)s8) {
        return;
    }
    *(int *)(t + 0xC4) = (int)s8;
    if (s8 == 3) {
        *(unsigned short *)(o + 0x74) = (unsigned short)(*(unsigned short *)(o + 0x74) | 2);
        func_073F58(o, *(int *)(t + 0xC4), 0.0f);
    } else {
        *(unsigned short *)(o + 0x74) = (unsigned short)(*(unsigned short *)(o + 0x74) & 0xFFFD);
        func_074128(o, *(int *)(t + 0xC4), 0, 1, 0.3f, 0.0f);
    }
}
