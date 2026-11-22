/* USA LEVEL_15.REL:0x13BBD8, 204-byte candidate (21 November 2026).
 * Measured pinned: 4 differing words; first difference at 0x54.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    char pad_00[0x44];
    unsigned char parent;
    char pad_45[0xB];
} Bone;

typedef struct {
    char pad_00[8];
    Bone *bones;
} Skel;

typedef struct {
    float m[12];
} Mat;

extern void func_13BB20(Mat *out, char *src);
extern void func_0EC3A0(Mat *dst, Mat *a, Mat *b);

void func_13BBD8(Mat *out, Skel *skel, char *pose, int idx)
{
    Mat tmp;

    func_13BB20(out, (char *)(idx * 0x30) + (int)pose);
    for (idx = skel->bones[idx].parent; idx != 0xFF; idx = skel->bones[idx].parent) {
        func_13BB20(&tmp, (char *)(idx * 0x30) + (int)pose);
        func_0EC3A0(out, out, &tmp);
    }
}
