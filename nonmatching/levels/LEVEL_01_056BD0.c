/* LEVEL_01.REL:0x056BD0: reviewed 336-byte candidate, held for ABI review.
 * Scans the pickup table for the first entry within reach of the object, and
 * if one passes the overlap test latches it into the object.
 * gnu-ee-trial C with gnu-ee-trial links 336/336 bytes and is byte-exact at
 * this and 14 other USA placements, but the prototypes disagree.
 * It declares func_03C360 returning int with no arguments, but the accepted
 * LEVEL_01_03C360.c defines it returning int with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct {
    char pad_00[0xC];
    char a[0xC];
    char b[0xC];
    float pos[3];
    int w_30;
} Ent;

extern int D_001F482C;
extern Ent *D_001F4830;
extern float D_00238EF0;
extern char D_0020E928[];
extern int func_03C360(void);
extern int func_11DD10(float *p, float f0, float f1, float *q, char *r, Ent *e, char *a, char *b);

int func_056BD0(char *o)
{
    Ent *e;
    Ent *end;
    float r2;
    float px;
    float py;
    float pz;
    float dx;
    float dy;
    float dz;
    unsigned char ok;

    if (*(short *)(o + 0x100) == 0x37) {
        return 0;
    }
    if (func_03C360()) {
        return 0;
    }
    e = D_001F4830;
    end = e + D_001F482C;
    r2 = D_00238EF0 * D_00238EF0;
    px = *(float *)(o + 0x30);
    py = *(float *)(o + 0x34);
    pz = *(float *)(o + 0x38);
    for (; e != end; e++) {
        dx = e->pos[0] - px;
        dy = e->pos[1] - py;
        dz = e->pos[2] - pz;
        if (dx * dx + dy * dy + dz * dz < r2) {
            ok = func_11DD10((float *)(o + 0x30), r2, 1.0f, e->pos, D_0020E928, e, e->a, e->b);
            if (ok) {
                break;
            }
        }
    }
    if (e == end) {
        return 0;
    }
    *(short *)(o + 0x102) = 0x37;
    *(int *)(o + 0xCA4) = e->w_30;
    return 0;
}
