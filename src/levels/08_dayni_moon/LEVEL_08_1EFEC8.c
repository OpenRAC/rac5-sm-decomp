/* LEVEL_08:0x1EFEC8 -- placement copy of LEVEL_04_1C6D48.c: starts the object effect state: merges the global id into the packed word, resets the state block fields, sets flags 0x30 and returns 1; a lifted copy of the position is built in a local nothing reads. */
extern int D_002E70EC;
extern unsigned int D_00252674;

static __inline__ void Copy3(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
}

int func_1EFEC8(char *object)
{
    char *state;
    float pos[3];

    state = *(char **)(object + 0x58);
    D_00252674 = (D_00252674 & 0xF800FFFFU) | (D_002E70EC << 16);
    Copy3(pos, (float *)(object + 0x30));
    pos[1] = pos[1] + 0.1f;
    *(unsigned char *)(state + 0xE) = 2;
    *(char **)(state + 0x10) = object;
    *(int *)(state + 0x14) = 0;
    *(int *)(state + 0) = 0;
    *(unsigned int *)(object + 0x64) |= 0x30;
    *(int *)(state + 0x18) = 0;

    return 1;
}
