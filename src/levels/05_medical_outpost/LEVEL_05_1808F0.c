/* LEVEL_05:0x1808F0 -- fade state machine: while idle, arms the object once both linked bodies are in state 10; while armed, advances a 0..1 phase and steps a 20-level counter up or down, calling func_096B38 with the object each frame. */
struct Body {
    char pad0[0x45];
    unsigned char b45;
};

struct Link {
    char pad0[4];
    struct Body *p4;
    struct Body *p8;
};

struct Obj {
    char pad0[0x45];
    unsigned char b45;
    unsigned char b46;
    char pad47[0xD];
    struct Link *f54;
    char pad58[0x18];
    float f70;
};

extern void func_1809F0(void);
extern void func_096B38(void *fn, struct Obj *o, int a2, int a3);

void func_1808F0(struct Obj *o)
{
    struct Link *l = o->f54;

    if (o->b45 == 0) {
        if (l->p4->b45 == 10 && l->p8->b45 == l->p4->b45) {
            o->f70 = 0.0f;
            o->b45 = 1;
            o->b46 = 1;
        }
        return;
    }
    o->f70 = o->f70 + 0.0040000006556510925f;
    if (!(o->f70 < 1.0f)) {
        o->f70 = 1.0f;
        o->b46 = o->b46 - 1;
        if (o->b46 == 0) {
            o->f70 = 0.0f;
            return;
        }
    } else if (o->b46 < 0x14) {
        o->b46 = o->b46 + 1;
    }
    func_096B38(func_1809F0, o, 0, 0);
}
