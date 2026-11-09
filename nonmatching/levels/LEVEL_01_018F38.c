/* LEVEL_01.REL:0x018F38: reviewed 352-byte candidate, held for ABI review.
 * Copies out two stored 4x4 matrices and two small fields from the global
 * state, when it is valid.
 * pinned C with gnu-ee-trial links 352/352 bytes and is byte-exact at this and
 * 10 other USA placements, but the prototypes disagree.
 * It defines the function returning int with (pointer, pointer, pointer,
 * pointer), but the accepted caller LEVEL_01_0C48D8.c declares it returning
 * void with (pointer, pointer, pointer, pointer).
 * It defines the function returning int with (pointer, pointer, pointer,
 * pointer), but the accepted caller LEVEL_01_18D0F8.c declares it returning
 * int with (int, int, int, pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct Mat_018F38 {
    float m[16];
};

struct State_018F38 {
    struct Mat_018F38 a;
    struct Mat_018F38 b;
    unsigned short h_80;
    unsigned char b_82;
    unsigned char b_83;
};

extern char *D_001F3FAC;

int func_018F38(struct Mat_018F38 *a0, struct Mat_018F38 *a1, unsigned short *a2, unsigned char *a3)
{
    struct State_018F38 *s;

    s = (struct State_018F38 *)(D_001F3FAC + 0x10490);
    if (s->b_83 == 0) {
        return 0;
    }
    if (a0 != 0) {
        *a0 = s->a;
    }
    if (a1 != 0) {
        *a1 = s->b;
    }
    if (a2 != 0) {
        *a2 = s->h_80;
    }
    if (a3 != 0) {
        *a3 = s->b_82;
    }
    return 1;
}
