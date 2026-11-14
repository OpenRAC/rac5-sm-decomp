/* USA LEVEL_16.REL:0x14B018, 196-byte candidate (14 November 2026).
 * Measured pinned: 27 differing words; first difference at -.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern int D_0019AEA0;

void func_14B018(char *o, int idx)
{
    char *tbl;
    char *ent;
    unsigned int g;
    unsigned char kind;
    int flags;
    float f;

    tbl = *(char **)(o + 0x58);
    ent = *(char **)(tbl + idx * 0x1C);
    if (ent == 0) {
        return;
    }
    g = D_0019AEA0;
    kind = *(unsigned char *)(tbl + g + 0x40D);
    if ((unsigned char)(kind - 3) < 2u) {
        f = *(float *)(tbl + (g << 2) + 0x410) + 0.5f;
        flags = *(int *)(ent + 0x64);
        flags = (flags & ~0x20) | 0x40;
        *(int *)(ent + 0x64) = flags;
        *(int *)(ent + 0x68) = ((int)f << 24) | 0x00FFFFFF;
        return;
    }
    if (kind == 2) {
        *(int *)(ent + 0x64) = *(int *)(ent + 0x64) | 0x20;
        return;
    }
    if (kind == 1) {
        flags = *(int *)(ent + 0x64);
        flags &= ~0x20;
        flags &= ~0x40;
        *(int *)(ent + 0x64) = flags;
    }
}
