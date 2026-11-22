/* LEVEL_02:0x16F098 -- sets up the object's state block (back pointer, mode byte 2, cleared fields), builds the attribute word from the object's flag word and the linked table entry (bits 0x1, 0x81, 0x100, 0x200, 0x800 and 0x400), and when the sweep test succeeds records whether the swept box is wider than 8 units in either axis (+0xF) and spawns the matching effect from the global table; always returns 1. */
extern char D_00246BF8[];

extern int func_088610(float *a, float *b, char *object);
extern void func_09BC40(char *rec, char *state, float *a, float *b, unsigned int flags);

int func_16F098(char *object)
{
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

    state = *(char **)(object + 0x58);
    *(char **)(state + 0x10) = object;
    *(unsigned char *)(state + 0xE) = 2;
    *(int *)(state + 0x14) = 0;
    *(int *)state = 0;
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
    if (func_088610(a, b, object) != 0) {
        dx = b[0] - a[0];
        dz = b[2] - a[2];
        if (8.0f < dx || 8.0f < dz) {
            which = 1;
        } else {
            which = 0;
        }
        *(unsigned char *)(state + 0xF) = which;
        func_09BC40(D_00246BF8 + which * 0x68, state, a, b, flags);
    }
    return 1;
}
