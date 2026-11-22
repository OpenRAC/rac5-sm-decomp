/* USA LEVEL_02.REL:0x149ED8 (21 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement disagrees with an
 * accepted prototype.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
extern char D_00246BF8[];
extern int D_0021BD54;

extern float func_0834F8(char *object, unsigned int idx);
extern void func_083428(char *object, float t, unsigned int idx);
extern int func_088610(float *a, float *b, char *object);
extern void func_09B940(char *rec, char *state, float *a, float *b, unsigned int flags);

int func_149ED8(char *object)
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
        *(int *)(timer + 4) = D_0021BD54 + *(int *)(timer + 4);
    }
    if (*(unsigned char *)(timer + 8) != 0) {
        func_0834F8(object, *(unsigned int *)timer);
    } else {
        func_083428(object, 0.0f, *(unsigned int *)timer);
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
    if (func_088610(a, b, object) != 0) {
        dx = b[0] - a[0];
        dz = b[2] - a[2];
        if (8.0f < dx || 8.0f < dz) {
            which = 1;
        } else {
            which = 0;
        }
        *(unsigned char *)(state + 3) = which;
        func_09B940(D_00246BF8 + which * 0x68, state, a, b, flags);
    }
    return 1;
}
