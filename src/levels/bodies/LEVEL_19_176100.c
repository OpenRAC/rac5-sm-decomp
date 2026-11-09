/* LEVEL_19:0x176100 -- initializes a spawned effect when the linked record has the expected tag. */
struct Src { char pad[0xF8]; int v; };
struct Q { char pad[0x14]; float a, b, c, d; };
struct St {
    struct Src *src;
    int p4, p8;
    int val;
    float f10;
    float f14;
    int p18;
    int f1C;
    char pad[0x334 - 0x20];
    char flag;
};
struct Tag { char pad[0x24]; int magic; };
struct Obj {
    char pad[0x40];
    struct Tag *tag;
    char p44;
    char b45;
    char pad2[0x58 - 0x46];
    struct St *st;
};
struct Cnt { char pad[0x40]; int n; };
extern struct Q *D_001BF574[];
extern struct Cnt *func_021D08(int a, int b);
extern void func_073660(struct Obj *o, struct Q *q, int a, int b, int c, int d, int e, int f, float f0, float f1, float f2, float f3);

void func_176100(struct Obj *obj, int val)
{
    struct St *s;
    struct Cnt *c;
    struct Q *q;

    if (obj->tag->magic == 0x63670C2B) {
        s = obj->st;
        c = func_021D08(0xC, s->src->v);
        s->val = val;
        c->n = c->n - 1;
        q = D_001BF574[0];
        if (q != 0) {
            func_073660(obj, q, 0, 0, 0, 0, 0, 1, q->a, q->b, q->c, q->d);
        }
        s->f10 = 30.0f;
        obj->b45 = 2;
        s->f14 = 7.0001397132873535f;
        s->flag = 1;
        obj->b45 = 8;
        if (c->n == 0) {
            s->f1C = 0;
        }
    }
}
