/* USA LEVEL_01.REL:0x031268, 180-byte candidate (14 November 2026).
 * Measured pinned --as: 17 differing words; first difference at 80.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Col {
    unsigned char c[4];
} Col;

typedef struct Path {
    char pad_00[4];
    float *points;
    char pad_08[0xC];
    unsigned short count;
} Path;

extern int func_02FFC0(float *out, int a, int b, Col col, int flags);

int func_031268(float *out, int a, int b, Path *path, unsigned char *index, Col col, int flags)
{
    float *pt;
    Col c;

    c = col;
    if (func_02FFC0(out, a, b, c, flags | 3) == 0) {
        *index = *index + 1;
        if (*index < path->count) {
            pt = path->points + *index * 4;
            out[0] = pt[0];
            out[1] = pt[2];
            return 0;
        }
        return 1;
    }
    return 0;
}
