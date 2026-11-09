/* LEVEL_10.REL:0x016500: reviewed 244-byte candidate, held for ABI review.
 * Randomized cone test of a point against the active frame.
 * gnu-ee-trial C with gnu-ee-trial links 244/244 bytes and is byte-exact at
 * this USA placement, but the prototypes disagree.
 * It declares func_003200 returning pointer with no arguments, but the
 * accepted LEVEL_10_003200.c defines it returning int with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct Vec3 { float x, y, z; } Vec3;
typedef struct Cam { char pad[0x20]; Vec3 axis; char pad2[4]; Vec3 pos; } Cam;
extern Cam *func_003200(void);
extern float func_001300(void);
int func_016500(Vec3 *p)
{
    int r = 0;
    Cam *c = func_003200();
    Vec3 *pos = &c->pos;
    Vec3 *axis = &c->axis;
    Vec3 d;
    float dist2, dot, a, b;
    d.x = p->x - pos->x;
    d.y = p->y - pos->y;
    d.z = p->z - pos->z;
    dist2 = d.x * d.x + d.y * d.y + d.z * d.z;
    dot = d.x * axis->x + d.y * axis->y + d.z * axis->z;
    if (dot > 0.0f) {
        float sq = dot * dot;
        a = func_001300();
        b = func_001300();
        if (a * b * dist2 < sq)
            r = 1;
    }
    return r;
}
