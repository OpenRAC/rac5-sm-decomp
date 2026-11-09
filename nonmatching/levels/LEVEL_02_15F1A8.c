/* LEVEL_02.REL:0x15F1A8: reviewed 236-byte candidate, held for ABI review.
 * Initializes a set of channel parameters from an object's settings.
 * gnu-ee-trial C with gnu-ee-trial links 236/236 bytes and is byte-exact at
 * this USA placement, but the prototypes disagree.
 * It declares func_040CF0 returning void with (int), but the accepted
 * LEVEL_02_040CF0.c defines it returning void with (pointer).
 * It declares func_003718 returning void with (int, int, float, float), but
 * the accepted LEVEL_02_003718.c defines it returning void with (pointer,
 * pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct S {
    char pad[0xA4];
    float a4;
    float a8;
    float ac;
};
struct O {
    char pad[0x20];
    char sub20[0x10];
    char sub30[0x24];
    struct S *s;
};
extern void func_040CF0(int a);
extern void func_0033D0(float a, float b);
extern void func_003718(int a, int b, float x, float y);
extern void func_0038B8(void *p, int a, int b, float x);
extern void func_003838(int a, int b, float x, float y);
extern void func_003888(int a, int b, float x, float y);
extern void func_0036E8(int a, int b, float x, float y);
extern void func_003170(void *p, int a, float x);
extern void func_01AB40(void *p);

void func_15F1A8(struct O *o)
{
    struct S *s = o->s;
    void *p = o->sub30;
    func_040CF0(1);
    func_0033D0(0.0f, 0.0f);
    func_003718(10, 0, s->a8, 1.0f);
    func_0038B8(o->sub20, 10, 1, 1.0f);
    func_003838(10, 0, 0.10000000149011612f, 1.0f);
    func_003888(10, 0, s->ac, 1.0f);
    func_0036E8(10, 0, s->a4, 1.0f);
    func_003170(p, 0, 0.0f);
    func_01AB40(p);
}
