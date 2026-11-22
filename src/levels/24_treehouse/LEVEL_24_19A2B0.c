/* LEVEL_24:0x19A2B0 -- sets up the object's state block (mode byte 2, no handle, back pointer), builds the attribute word from the object's flag word and the linked table entry (bits 0x1, 0x81, 0x100, 0x200, 0x800, 0x400 and the fixed 0x4010), and when the sweep test succeeds records whether the swept box is wider than 8 units in either axis (+3) and spawns the matching effect from the global table; finally marks the object (+0x76 = 2), clears the first word of its record (+0x54) and returns 1. */
extern char D_001FB5F8[];

extern int func_07C030(float *a, float *b, char *object);
extern void func_08E070(char *rec, char *state, float *a, float *b, unsigned int flags);

int func_19A2B0(char *object)
{
    char *state;
    int *record;
    char *link;
    char *entry;
    unsigned int word;
    unsigned int flags;
    unsigned int base;
    unsigned int alt;
    unsigned int attr;
    int which;
    float dx;
    float dz;
    float a[4];
    float b[4];

    state = *(char **)(object + 0x58);
    record = *(int **)(object + 0x54);
    *(unsigned char *)(state + 2) = 2;
    *(unsigned short *)state = 0xFFFF;
    *(char **)(state + 4) = object;
    word = *(unsigned int *)(object + 0x64);
    link = *(char **)(object + 0x40);
    entry = *(char **)(link + 4) + *(unsigned char *)(object + 0x44) * 0x34;
    base = word & 0x1420;
    alt = base | 1;
    flags = base | 0x81;
    if (*(int *)(entry + 0xC) == 0) {
        flags = alt;
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
    attr = flags | 0x4010;
    if (func_07C030(a, b, object) != 0) {
        dx = b[0] - a[0];
        dz = b[2] - a[2];
        if (8.0f < dx || 8.0f < dz) {
            which = 1;
        } else {
            which = 0;
        }
        *(unsigned char *)(state + 3) = which;
        func_08E070(D_001FB5F8 + which * 0x68, state, a, b, attr);
    }
    *(unsigned char *)(object + 0x76) = 2;
    *record = 0;
    return 1;
}
