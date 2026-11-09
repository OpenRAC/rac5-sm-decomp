/* LEVEL_08:0x21DED0 -- ticks a timer and drives a two-state object from a query result and a request flag. */

struct Obj21DED0 {
    char pad0[0x28];
    unsigned short h28;
    unsigned char b2A;
    unsigned char b2B;
};

extern char D_00279F30[];
extern float D_00279F3C;
extern char D_00279F48[];

extern float func_084A18(void *x);
extern int func_084A40(void *x, int a);
extern void func_21DA48(struct Obj21DED0 *o, void *x, int y, unsigned short *dur);
extern void func_035958(struct Obj21DED0 *o, void *x, unsigned char *p, char *a, char *b);
extern void func_084C98(void *x, int a, int b, int c, float f, float g);

void func_21DED0(struct Obj21DED0 *o, void *x, int y, int flag, unsigned short *dur)
{
    if (o->h28 != 0) {
        o->h28 = o->h28 - 1;
    }
    if (o->b2B == 3) {
        if (o->b2A == 0) {
            if (0.13333334f <= func_084A18(x)) {
                o->b2A = 1;
                func_21DA48(o, x, y, dur);
            }
        }
        if (func_084A40(x, 0) != 0) {
            o->h28 = *dur;
            func_035958(o, x, &o->b2B, D_00279F48, D_00279F30);
        }
    } else if (o->h28 == 0 && flag != 0) {
        float t;

        t = D_00279F3C;
        o->b2B = 3;
        func_084C98(x, 3, 0, 1, t, 0.0f);
        o->b2A = 0;
    } else {
        func_035958(o, x, &o->b2B, D_00279F48, D_00279F30);
    }
}
