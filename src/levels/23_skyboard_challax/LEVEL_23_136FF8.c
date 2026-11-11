/* LEVEL_23:0x136FF8 -- placement copy of LEVEL_03_141550.c: stores a prioritized value into a slot; second function writes two table entries. */
struct Slot {
    int n;
    float x;
    char pad8[8];
    unsigned char id;
};
struct Obj {
    char pad[0x58];
    struct Slot *slot;
};
struct Obj2 {
    char pad[8];
    int idx;
    unsigned char c;
    char padD[7];
    unsigned char flag;
};
struct Holder {
    char pad[0x58];
    struct Obj2 *o;
};
extern void func_0252A0(int a, int b, int c);

int func_136FF8(struct Obj *o, unsigned char id, float x, int n)
{
    struct Slot *s;
    if (o == 0 || id == 0 || x <= 0.0f)
        return 0;
    s = o->slot;
    if (s->id != 0 && s->n >= n) {
        if (s->id != id)
            return 0;
        if (!(s->x < x))
            return 0;
        s->x = x;
        return 1;
    }
    s->id = id;
    s->n = n;
    s->x = x;
    return 1;
}

void func_137078(struct Holder *h)
{
    struct Obj2 *p;
    int i;
    int c;
    if (h != 0) {
        p = h->o;
        i = p->idx - 1;
        c = p->c;
        p->flag = 1;
        func_0252A0(i * 2 + 4, 1, c);
        func_0252A0(i * 2 + 0xA2, 1, c);
    }
}
