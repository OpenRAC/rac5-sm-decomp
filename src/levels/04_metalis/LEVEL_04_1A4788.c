/* LEVEL_04:0x1A4788 -- ticks a timed attachment, fading its scale and copying the transform to the linked object. */
typedef struct {
    float m[16];
} Mat;
typedef struct {
    char pad0[0x64];
    unsigned int flags;
    int v68;
} Obj;
typedef struct {
    float t;
    Mat *link;
} Timer;

extern int func_12CE88(unsigned int a, unsigned int b, float f);
extern void func_1A4428(Obj *a, Obj *b, Timer *t);
extern void func_1352C0(int a, Mat *m, float x, float y, float z);

int func_1A4788(Obj *a, Obj *b, Timer *t, float *dir)
{
    float v[3];
    float tt;
    float scale;
    int r;
    Mat *m;

    a->flags |= 0x840;
    b->flags |= 0x40;
    r = func_12CE88(0xFFFFFFFF, 0xFFFF7F7F, t->t);
    a->v68 = r;
    b->v68 = r;
    tt = t->t - 0.008333333767950535f;
    t->t = tt;
    if (tt <= 0.0f) {
        func_1A4428(a, b, t);
        return 1;
    }
    if (0.8999999761581421f < tt)
        scale = 1.0f - (tt - 0.8999999761581421f) / 0.10000002384185791f;
    else
        scale = tt / 0.8999999761581421f * 0.699999988079071f + 0.30000001192092896f;
    v[0] = scale * dir[0];
    v[1] = scale * dir[1];
    v[2] = scale * dir[2];
    m = t->link;
    *m = *(Mat *)a;
    func_1352C0(0, m, v[0], v[1], v[2]);
    m->m[13] = m->m[13] + dir[3];
    return 0;
}
