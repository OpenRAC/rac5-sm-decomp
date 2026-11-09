/* LEVEL_18.REL:0x159F78: reviewed 208-byte candidate, held for ABI review.
 * Checks a target is within range after state tests.
 * pinned C with gnu-ee-trial links 208/208 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_159C10 returning int with (pointer, pointer), but the
 * accepted LEVEL_18_159C10.c defines it returning int with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct {
    int i0;
    char pad4[0x18A - 4];
    unsigned char b18A;
} B;
typedef struct {
    char pad0[0x10];
    float *p10;
    char pad14[4];
    unsigned char b18;
} T;
typedef struct {
    char pad0[0x54];
    T *t54;
    B *b58;
} A;
typedef struct {
    char pad0[0x30];
    float p[3];
    char pad3C[0xFC - 0x3C];
    int iFC;
} S;
extern int func_159C10(A *a, B *b);

int func_159F78(A *a, S *s)
{
    T *t;
    B *b;
    float *q;
    float *p;
    float dx, dy, dz;

    t = a->t54;
    b = a->b58;
    if (s->iFC != t->b18 || b->b18A == 0 || b->i0 != 0 || func_159C10(a, b) == 0)
        return 0;
        q = t->p10 + 12;
        p = s->p;
        dx = p[0] - q[0];
        dy = p[1] - q[1];
        dz = p[2] - q[2];
        return dx * dx + dy * dy + dz * dz < 1.44f;
}
