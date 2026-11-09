/* LEVEL_16.REL:0x155E30: reviewed 452-byte candidate, held for ABI review.
 * Checks two probe points against a collision shape and advances a step
 * counter.
 * gnu-ee-trial C with gnu-ee-trial links 452/452 bytes and is byte-exact at
 * this USA placement, but the prototypes disagree.
 * It declares func_0247D0 returning int with (pointer, pointer), but the
 * accepted LEVEL_16_0247D0.c defines it returning void with (pointer,
 * pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct {
    char pad0[0x39];
    unsigned char step;
} Stat;

typedef struct {
    char pad0[0xC];
    unsigned short flags;
    char pad1[0x2A];
    float shape[1];
} Body;

typedef struct {
    char pad0[0x54];
    Stat *stat;
    Body *body;
} Obj;

extern float D_001D45B0[];
extern float func_06FB28(Obj *obj);
extern int func_06FB50(Obj *obj, int n);
extern void func_1044F0(float *src, Obj *obj, float *dst);
extern int func_0247D0(float *pt, float *shape);
extern void func_155FF8(Obj *obj, int n);
extern void func_156FE0(Obj *obj, float *pt, float *shape);

void func_155E30(Obj *obj)
{
    Stat *st = obj->stat;
    Body *body = obj->body;
    float v1[3];
    float v2[3];
    float *q;
    float *shape;
    float f;
    unsigned char r;
    int m;

    f = func_06FB28(obj);
    if (st->step < 2 && D_001D45B0[st->step] <= f) {
        v1[0] = -0.608f;
        v1[1] = 1.304f;
        v1[2] = 1.149f;
        func_1044F0(v1, obj, v1);
        shape = body->shape;
        body->flags |= 8;
        r = (unsigned char)func_0247D0(v1, shape);
        m = body->flags & -9;
        body->flags = m;
        if (!r) {
            goto fail;
        }
        q = v2;
        q[0] = 0.588f;
        q[1] = 1.274f;
        q[2] = 1.149f;
        func_1044F0(q, obj, q);
        body->flags |= 8;
        r = (unsigned char)func_0247D0(q, shape);
        m = body->flags & -9;
        body->flags = m;
        if (!r) {
fail:
            func_155FF8(obj, 0x12);
            return;
        }
        func_156FE0(obj, q, shape);
        func_156FE0(obj, v1, shape);
        st->step++;
    }
    if (func_06FB50(obj, 0)) {
        func_155FF8(obj, 0x14);
    }
}
