/* USA LEVEL_15.REL:0x1345F8, 132-byte candidate (14 November 2026).
 * Measured pinned: 14 differing words; first difference at 48.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Entry {
    float x;
    int y;
    float z;
} Entry;

typedef struct Target {
    char pad_00[8];
    float x;
} Target;

typedef struct Inner {
    char pad_00[0x48];
    Target *target;
} Inner;

typedef struct State {
    Inner *inner;
    char pad_04[0x138];
    int index;
    int y;
    float z;
} State;

extern State D_002F4F88;
extern Entry D_00171AF0[];
extern void func_061910(Inner *inner, float t, unsigned int idx);

void func_1345F8(int idx, float t)
{
    func_061910(D_002F4F88.inner, t, idx);
    D_002F4F88.index = idx;
    D_002F4F88.inner->target->x = D_00171AF0[idx].x;
    D_002F4F88.z = D_00171AF0[idx].z;
    D_002F4F88.y = D_00171AF0[idx].y;
}
