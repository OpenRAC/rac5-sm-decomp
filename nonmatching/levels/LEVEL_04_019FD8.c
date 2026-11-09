/* LEVEL_04.REL:0x019FD8: reviewed 92-byte candidate, held for ABI review.
 * Placement copy of LEVEL_01_01A338.c.
 * pinned C with gnu-ee-trial links 92/92 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_019F50 returning void with no arguments, but the accepted
 * LEVEL_04_019F50.c defines it returning void with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct {
    char pad0[4];
    float v4;
} A;

typedef struct {
    char pad0[0x6C];
    int v6C;
    float v70;
} B;

typedef struct {
    char pad0[0x2E0];
    float v2E0;
    char pad1[0x59C - 0x2E4];
    int v59C;
} C;

extern C D_24F950;
extern B D_24A360;

void func_019F50(void);

void func_019FD8(A *a0)
{
    func_019F50();

    {
        C *p = &D_24F950;
        if (D_24A360.v6C == p->v59C) {
            a0->v4 = p->v2E0;
        }
    }
    a0->v4 = a0->v4 + D_24A360.v70;
}
