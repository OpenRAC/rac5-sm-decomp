/* LEVEL_22.REL:0x130000: reviewed 212-byte candidate, held for ABI review.
 * Counts a timer down, then either finishes or prints the seconds left.
 * pinned C with gnu-ee-trial links 212/212 bytes and is byte-exact at this and
 * 1 other USA placement, but the prototypes disagree.
 * It declares func_0A3A88 returning void with (int, pointer, int, int), but
 * the accepted LEVEL_22_0A3A88.c defines it returning void with (pointer,
 * pointer, pointer, pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct Obj { char pad0[0x45]; unsigned char f45; char pad46[0x70 - 0x46]; float f70; } Obj;
extern char D_002E8038[];
extern char D_0017B650[];
extern float ceilf(float x);
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_0AA7E0(int a);
extern void func_12FE00(Obj *o, int a, int b);
extern void func_0571F8(float f);
extern int func_094648(int a);
extern void func_0A3A88(int a, char *s, int b, int c);

void func_130000(Obj *o)
{
    float t;

    func_0AA7E0(22);
    t = o->f70 - 1.0f;
    o->f70 = t;
    if (t <= 0.0f) {
        func_12FE00(o, o->f45, 4);
        return;
    }
    sprintf(D_002E8038, D_0017B650, (int)ceilf(t / 30.0f));
    func_0571F8(0.0f);
    if (func_094648(0))
        func_0A3A88(0, D_002E8038, 0, 0);
}
