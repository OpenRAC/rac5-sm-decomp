/* level state machine (0x52 -> 0x53 -> 0x54) */
typedef struct { float x, y, z; } Vec3;

typedef struct {
    unsigned char p0[0x102];
    short f102;
    unsigned char p1[0x210 - 0x104];
    Vec3 vec;
    unsigned char p2[0x240 - 0x21C];
    int f240;
    unsigned char p3[0x26C - 0x244];
    float f26c;
    unsigned char p4[0x36C - 0x270];
    int state;
    unsigned char p5[0x59C - 0x370];
    void *obj;
    unsigned char p6[0x974 - 0x5A0];
    Vec3 src;
    unsigned char p7[0x988 - 0x980];
    int counter;
} Level;

extern void func_046A90(void *s, int a);
extern float func_084A18(void *o);
extern void func_04DA50(void *s);
extern int func_084A40(void *o, int a);
extern void func_052B78(void *s, int a, int b, int c, float f1, float f2);

void func_000527E0(Level *s) {
    Vec3 *d;
    Vec3 *q;
    int r;
    func_046A90(s, 1);
    if (s->state == 0x52) {
        func_084A18(s->obj);
        d = &s->vec;
        q = &s->src;
        d->x = q->x;
        d->y = q->y;
        d->z = q->z;
        s->f240 = 0;
        s->f26c = 1.0f;
        func_04DA50(s);
        r = func_084A40(s->obj, 0);
        if (r == 0)
            return;
        s->counter = 60;
        func_052B78(s, 0x53, 0, 1, 0.15f, 0.0f);
    } else if (s->state == 0x53) {
        s->counter--;
        if (s->counter != 0)
            return;
        func_052B78(s, 0x54, 0, 1, 0.15f, 0.0f);
    } else {
        if (func_084A40(s->obj, 0) != 0)
            s->f102 = 0;
    }
}
