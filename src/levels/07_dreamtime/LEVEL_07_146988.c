/* LEVEL_07:0x146988 -- placement copy of LEVEL_19_128F98.c: placement copy of LEVEL_02_149ED8.c: per-frame step of a timed effect: advances the delay field of the timer block, starts the linked item or the idle pose, sets up the state record, builds the attribute word from the object's flags and linked table entry, and when the sweep test succeeds spawns the near or far effect from the global table; always returns 1. */
extern char D_00244FF8[];
extern int D_0021B094;

extern float func_07ED90(char *object, unsigned int idx);
extern void func_07ECC0(char *object, float t, unsigned int idx);
extern int func_083F28(float *a, float *b, char *object);
extern void func_0970F8(char *rec, char *state, float *a, float *b, unsigned int flags);

int func_146988(char *object)
{
    char *timer;
    char *state;
    char *link;
    char *entry;
    unsigned int word;
    unsigned int flags;
    int which;
    float a[4];
    float b[4];
    float dx;
    float dz;

    timer = *(char **)(object + 0x54);
    state = *(char **)(object + 0x58);
    if (*(int *)(timer + 4) != 0) {
        *(int *)(timer + 4) = D_0021B094 + *(int *)(timer + 4);
    }
    if (*(unsigned char *)(timer + 8) != 0) {
        func_07ED90(object, *(unsigned int *)timer);
    } else {
        func_07ECC0(object, 0.0f, *(unsigned int *)timer);
    }
    *(unsigned char *)(state + 2) = 2;
    *(char **)(state + 4) = object;
    *(unsigned short *)state = 0xFFFF;
    word = *(unsigned int *)(object + 0x64);
    link = *(char **)(object + 0x40);
    entry = *(char **)(link + 4) + *(unsigned char *)(object + 0x44) * 0x34;
    flags = (word & 0x1420) | 1;
    if (*(int *)(entry + 0xC) != 0) {
        flags = (word & 0x1420) | 0x81;
    }
    if (*(int *)(entry + 0x10) != 0) {
        flags = flags | 0x100;
    }
    if (*(int *)(entry + 0x14) != 0) {
        flags = flags | 0x200;
    }
    if (*(unsigned char *)(link + 0x3F) == 1) {
        flags = flags | 0x800;
    }
    if (((word >> 3) & 1) != 0) {
        flags = flags | 0x400;
    }
    if (func_083F28(a, b, object) != 0) {
        dx = b[0] - a[0];
        dz = b[2] - a[2];
        if (8.0f < dx || 8.0f < dz) {
            which = 1;
        } else {
            which = 0;
        }
        *(unsigned char *)(state + 3) = which;
        func_0970F8(D_00244FF8 + which * 0x68, state, a, b, flags);
    }
    return 1;
}
