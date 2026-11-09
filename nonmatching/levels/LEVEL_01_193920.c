/* LEVEL_01.REL:0x193920: reviewed 120-byte candidate, held for ABI review.
 * Scans a 45-entry table for the argument's tag, latches a flag when an early
 * condition holds, and returns the matched entry's float or minus one.
 * pinned C with gnu-ee-trial links 120/120 bytes and is byte-exact at this and
 * 15 other USA placements, but the prototypes disagree.
 * It defines the function returning float with (pointer), but the accepted
 * caller LEVEL_01_193998.c declares it returning float with (int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct Tag {
    char pad_00[0x24];
    int w_24;
};

struct Obj {
    char pad_00[0x40];
    struct Tag *p_40;
};

extern unsigned char D_002087A4;
extern unsigned char D_002087A5;
extern char D_002246F8[];

float func_193920(struct Obj *a0)
{
    unsigned char t0;
    unsigned int a1;
    char *a2;
    int v;

    t0 = D_002087A4;
    D_002087A5 = 0;
    a1 = 0;
    a2 = D_002246F8;
    for (;;) {
        v = *(int *)a2;
        if (v == a0->p_40->w_24) {
            if (a1 == 2 && t0 != 0) {
                D_002087A5 = 1;
            }
            return *(float *)(a2 + 4);
        }
        a1++;
        a2 += 8;
        if (a1 >= 0x2D) {
            break;
        }
    }
    return -1.0f;
}
