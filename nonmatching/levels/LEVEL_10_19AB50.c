/* LEVEL_10.REL:0x19AB50: reviewed 236-byte candidate, held for ABI review.
 * Applies a scaled call on the sub-object; second function samples a pose
 * twice and copies two vectors.
 * pinned C with gnu-ee-trial links 236/236 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_003960 returning void with (int), but the accepted
 * LEVEL_10_003960.c defines it returning void with (long long).
 * It declares func_07D5E8 returning float with (pointer, pointer, int), but
 * the accepted LEVEL_10_07D5E8.c defines it returning float with (pointer,
 * pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct V3 { float x, y, z; } V3;
typedef struct Pose { char pad[0x30]; V3 v; } Pose;
typedef struct Own { char pad[0x134]; V3 a; V3 b; } Own;
typedef struct Obj { char pad[0x30]; char sub[1]; char pad31[0x58 - 0x31]; Own *own; } Obj;
extern char D_0022DE58[];
extern float func_001168(void);
extern void func_0037D8(char *p, int a, float f, float g);
extern void func_003960(int a);
extern float func_07D5E8(Obj *o, Pose *p, int n);
extern void func_123D68(char *p, Pose *q, char *r);

void func_19AB50(Obj *o)
{
    char *s = o->sub;
    float d = func_001168();

    func_0037D8(s, 0, 1.0f, -d);
    func_003960(0);
}

void func_19AB98(Obj *o)
{
    Pose p;
    Own *w = o->own;
    V3 *q;

    func_07D5E8(o, &p, 10);
    func_123D68((char *)w + 0x54, &p, D_0022DE58);
    func_07D5E8(o, &p, 49);
    q = &w->a;
    q->x = p.v.x;
    q->y = p.v.y;
    q->z = p.v.z;
    func_07D5E8(o, &p, 63);
    q = &w->b;
    q->x = p.v.x;
    q->y = p.v.y;
    q->z = p.v.z;
}
