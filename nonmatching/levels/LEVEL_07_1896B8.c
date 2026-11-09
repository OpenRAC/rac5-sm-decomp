/* LEVEL_07.REL:0x1896B8: reviewed 260-byte candidate, held for ABI review.
 * Applies five scaled parameters through setters, unless disabled; returns
 * whether it ran.
 * gnu-ee-trial C with gnu-ee-trial links 260/260 bytes and is byte-exact at
 * this USA placement, but the prototypes disagree.
 * It declares func_0036E8 returning void with (float, int, float, int), but
 * the accepted LEVEL_07_0036E8.c defines it returning void with (pointer,
 * pointer).
 * It declares func_003718 returning void with (float, int, float, int), but
 * the accepted LEVEL_07_003718.c defines it returning void with (pointer,
 * pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct Cfg {
    float f[5];
    unsigned char on;
};
struct Self {
    char pad[0x30];
    char at30[0x24];
    struct Cfg *cfg;
};
struct World {
    char pad[0x10513];
    unsigned char flag;
};
extern struct World *D_002082AC;
extern int D_0022F4F0;
extern int func_0279E0(int a);
extern void func_0018A0(int a);
extern void func_003170(void *p, int a, float f);
extern void func_0036E8(float x, int a, float y, int b);
extern void func_003718(float x, int a, float y, int b);
extern void func_003888(float x, int a, float y, int b);
extern void func_003838(float x, int a, float y, int b);
extern void func_003748(float x, float y, int a, int b);
extern void func_03C388(int a);

int func_1896B8(struct Self *self)
{
    struct Cfg *c;

    c = self->cfg;
    if (D_002082AC->flag == 0) {
        if (c->on == 0 || func_0279E0(D_0022F4F0 + 1) == 0) {
            func_0018A0(0);
            func_003170(self->at30, 1, 0.0f);
            func_0036E8(c->f[0], 200, 1.0f, 3);
            func_003718(c->f[1], 200, 1.0f, 3);
            func_003888(c->f[2], 200, 1.0f, 3);
            func_003838(c->f[3], 200, 1.0f, 3);
            func_003748(c->f[4], 1.0f, 200, 3);
            func_03C388(1);
            return 1;
        }
    }
    return 0;
}
