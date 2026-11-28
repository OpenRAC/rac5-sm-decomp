/* LEVEL_24:0x199768 -- on first run enables two ranges of slots, then reacts to a hit test by advancing a 0..3 state and updating the object. */
struct Obj {
    char pad_00[0x46];
    unsigned char b_46;
    char pad_47[0x54 - 0x47];
    int *p_54;
    int *p_58;
};
extern char D_00201040[];

extern int func_022CC8(int s, int a);
extern int func_022EA0(int a, int b, int c, int d);
extern int func_07E278(void *a, void *p);
extern char *func_127FB0(int id);
extern void func_0AED38(int a, void *b, void *c, int d);
extern int func_0AE8C8(void);
extern void func_077238(struct Obj *o, int a, float f);

void func_199768(struct Obj *o)
{
    int *p;
    int *q;
    unsigned int i;
    char *s;
    char *base;

    base = D_00201040;
    p = o->p_54;
    q = o->p_58;
    if (o->b_46 == 0) {
        for (i = 2; i < 0x10; i++) {
            if (func_022CC8(i, -1)) {
                func_022EA0(i, 1, -1, 1);
            }
        }
        for (i = 0x10; i < 0x14; i++) {
            if (func_022CC8(i, -1)) {
                func_022EA0(i, 1, -1, 0);
            }
        }
        o->b_46 = 1;
    }
    if (func_07E278((void *)p[0], base + 0x30)) {
        s = func_127FB0(0x2D3);
        func_0AED38(1, s, 0, 0);
        if (func_0AE8C8() == 1) {
            q[2] = q[2] + 1;
            if ((unsigned int)q[2] >= 4) {
                q[2] = 0;
            }
            func_077238(o, q[2], 0.0f);
        }
    }
}
