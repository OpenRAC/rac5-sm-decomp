/* USA LEVEL_02.REL:0x031C28, 152-byte candidate (14 November 2026).
 * Measured pinned: 17 differing words; first difference at 0x34.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
struct Path {
    char pad00[4];
    float *points;
    char pad08[0xC];
    unsigned short count;
};

extern int func_0306C0(float amount, char *out, char *actor, float *other, unsigned int flags);

int func_031C28(char *out, char *a1, float *a2, struct Path *path, unsigned char *index, unsigned int flags)
{
    float *p;

    if (func_0306C0(0.20000000298023224f, out, a1, a2, flags | 3) != 0) {
        return 0;
    }
    *index = *index + 1;
    if (*index >= path->count) {
        return 1;
    }
    p = (float *)((*index << 4) + (char *)path->points);
    ((float *)out)[0] = p[0];
    ((float *)out)[1] = p[2];
    return 0;
}
