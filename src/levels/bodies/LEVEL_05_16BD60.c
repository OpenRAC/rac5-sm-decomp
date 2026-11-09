/* LEVEL_05:0x16BD60 -- chooses a random behavior state for the owner; the second function seeds a four-float block. */
struct Vec4 {
    float x, y, z, w;
};
struct Data {
    char pad[0x20];
    float a, b;
    char pad28[0x24];
    struct Vec4 v;
    char pad5c[0x37];
    unsigned char state;
};
struct Own {
    char pad[0x58];
    struct Data *data;
};
extern int func_07A140(struct Own *o, int v);
extern int func_07A4B0(struct Own *o);
extern void func_07A398(struct Own *o, int mode, int a, int b, float x, float y);
extern int rand(void);

void func_16BD60(struct Own *o, int flag)
{
    int mode;
    int t;
    struct Data *p = o->data;

    if (func_07A140(o, p->state < 2)) {
        mode = 1;
        if (p->state == mode)
            p->state = 2;
        if (flag) {
            t = rand() % 5 <= mode;
            if (t) {
                mode = 6;
                p->state = 3;
                goto done;
            }
        }
        mode = 1;
        if (rand() % 3 < 2) {
            p->state = mode;
            mode = 3;
        } else {
            p->state = 0;
            mode = 0;
        }
    done:
        if (mode != func_07A4B0(o))
            func_07A398(o, mode, 0, 1, 0.125f, 0.0f);
    }
}

void func_16BE58(struct Own *o)
{
    struct Data *p = o->data;
    struct Vec4 *q;

    p->v.x = p->a;
    q = &p->v;
    q->y = p->b;
    q->z = 1.0f;
    q->w = 1.0f;
}
