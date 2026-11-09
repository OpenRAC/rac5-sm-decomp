/* LEVEL_10.REL:0x174468: reviewed 260-byte candidate, held for ABI review.
 * Looks up two records and derives a stored vector from an input state and its
 * flag bits.
 * gnu-ee-trial C with gnu-ee-trial links 260/260 bytes and is byte-exact at
 * this USA placement, but the prototypes disagree.
 * It declares func_088218 returning pointer with (int), but the accepted
 * LEVEL_10_088218.c defines it returning pointer with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct {
    char pad0[4];
    unsigned flags;
    char pad8[0x34 - 8];
    float y;
} Rec;
typedef struct {
    char pad0[8];
    char vec[0x74 - 8];
    unsigned flags;
    int link;
    float v7C;
    char pad80[8];
    float v88;
} Obj;
extern int func_0882F0(int a);
extern Rec *func_088218(int a);
extern float func_088500(Rec *r);
extern int func_0885C0(unsigned f);
extern int func_0885F8(unsigned f);
extern float func_173D40(void *out, void *v, float a, float b);
extern float func_173CB8(Obj *o, void *out);

void func_174468(Obj *o)
{
    Rec *r;
    float a;
    float b;
    o->link = func_0882F0(2);
    r = func_088218(2);
    o->flags = r->flags;
    a = func_088500(r);
    b = r->y;
    if (func_0885C0(o->flags))
        a -= 1.0f;
    if (func_0885F8(o->flags))
        a += 1.0f;
    if (o->flags & 0x40)
        b += 1.0f;
    if (o->flags & 0x10)
        b -= 1.0f;
    o->v7C = func_173D40((char *)o + 0x80, o->vec, a, b);
    o->v88 = func_173CB8(o, (char *)o + 0x80);
}
