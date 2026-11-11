/* LEVEL_06:0x1AF708 -- measures the squared distance to a target point and picks the next state of an actor. */

struct Ctl1AF708 {
    char pad_00[0x30];
    int w_30;
    char pad_34[0x04];
    int w_38;
};
struct Obj1AF708 {
    char pad_00[0x30];
    float pos_30[3];
    char pad_3C[0x18];
    struct Ctl1AF708 *ctl_54;
};

void func_018B30(float *out);
int func_07D818(int a, float *v);
void func_1AF0A8(struct Obj1AF708 *o, int state);
int func_1B00B8(struct Obj1AF708 *o, float *out);

static __inline__ void vsub(float *d, float *a, float *b)
{
    d[0] = a[0] - b[0];
    d[1] = a[1] - b[1];
    d[2] = a[2] - b[2];
}

void func_1AF708(struct Obj1AF708 *o)
{
    float pos[3];
    float d[3];
    float t1;
    float t2;
    float r;
    struct Ctl1AF708 *c;
    int v;

    c = o->ctl_54;
    func_018B30(pos);
    if (func_07D818(c->w_38, pos) == 0) {
        func_1AF0A8(o, 13);
        return;
    }
    vsub(d, pos, o->pos_30);
    r = d[0] * d[0] + d[1] * d[1] + d[2] * d[2];
    if (r <= 25.0f) {
        func_1AF0A8(o, 15);
    } else if (r <= 225.0f) {
        t1 = 0.0f;
        v = func_1B00B8(o, &t1);
        if (v == 0 || r < t1) {
            func_1AF0A8(o, 15);
        } else {
            c->w_30 = v;
            func_1AF0A8(o, 19);
        }
    } else {
        t2 = 0.0f;
        v = func_1B00B8(o, &t2);
        if (v == 0) {
            func_1AF0A8(o, 15);
        } else {
            c->w_30 = v;
            func_1AF0A8(o, 19);
        }
    }
}
