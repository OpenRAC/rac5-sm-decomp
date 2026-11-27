/* USA LEVEL_16:14B018, 196-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler r5900-mfc1; options: default.
 * Compiled 196 bytes: 8 differing words; first difference +0x48. No matching credit.
 * Remaining issue: register: only the kind-3/4 flag word differs (retail keeps load/and/or in v1
 * with -0x21 in v0; ours flag word in a2); r5900-mfc1 assembler drops the mfc1 nop, int kind +
 * unsigned char compares give the retail andi, offset local gives tbl+off order, global read
 * before the null test; expression/temp forms of the flag update shift the other registers (19
 * w)
 * Reopen with new caller/type evidence or a source hypothesis that resolves the recorded
 * difference without changing accepted callers.
 */

/* LEVEL_16:0x14B018 -- looks up the object's table entry and updates its draw flags from the current mode's kind byte (kinds 3/4 also set the alpha from the mode's float). */
extern int D_0019AEA0;

void func_14B018(char *o, int idx)
{
    char *tbl;
    char *ent;
    unsigned int g;
    int kind;
    int off;

    tbl = *(char **)(o + 0x58);
    g = D_0019AEA0;
    off = idx * 0x1C;
    ent = *(char **)(tbl + off);
    if (ent == 0) {
        return;
    }
    kind = *(unsigned char *)(tbl + g + 0x40D);
    if ((unsigned int)(kind - 3) < 2u) {
        float f = *(float *)(tbl + (g << 2) + 0x410) + 0.5f;
        int flags = *(int *)(ent + 0x64);
        flags = (flags & ~0x20) | 0x40;
        *(int *)(ent + 0x64) = flags;
        *(int *)(ent + 0x68) = ((int)f << 24) | 0x00FFFFFF;
        return;
    }
    if ((unsigned char)kind == 2) {
        *(int *)(ent + 0x64) = *(int *)(ent + 0x64) | 0x20;
        return;
    }
    if ((unsigned char)kind == 1) {
        int flags = *(int *)(ent + 0x64);
        flags &= ~0x20;
        flags &= ~0x40;
        *(int *)(ent + 0x64) = flags;
    }
}
