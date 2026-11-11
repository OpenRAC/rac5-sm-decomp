/* LEVEL_10:0x1A5E30 -- object init: copies the object's 16-float matrix into its state record (order 8..11, 0..7, 12..15), clears the state's counters, sets the 0.1 timer, registers the state with func_0ECA98, then sets the object's colour word, the 15.0 timer and the 0x80 bit, and reports success. */
typedef struct {
    float f[16];
} Vec;

struct State {
    Vec m;
    int f40;
    int f44;
    int f48;
    int f4C;
    int f50;
    float f54;
    char f58[1];
};

struct Obj {
    Vec m;
    char pad40[0x5];
    unsigned char b45;
    char pad46[0x12];
    struct State *f58;
    char pad5C[8];
    unsigned int f64;
    unsigned int f68;
    char pad6C[4];
    float f70;
};

extern void *D_00211934[1];
extern char D_0022EE80[];
extern void func_0ECA98(void *a0, void *a1, void *a2);

int func_1A5E30(struct Obj *o)
{
    struct State *s = o->f58;

    s->m.f[8] = o->m.f[8];
    s->m.f[9] = o->m.f[9];
    s->m.f[10] = o->m.f[10];
    s->m.f[11] = o->m.f[11];
    s->m.f[0] = o->m.f[0];
    s->m.f[1] = o->m.f[1];
    s->m.f[2] = o->m.f[2];
    s->m.f[3] = o->m.f[3];
    s->m.f[4] = o->m.f[4];
    s->m.f[5] = o->m.f[5];
    s->m.f[6] = o->m.f[6];
    s->m.f[7] = o->m.f[7];
    s->m.f[12] = o->m.f[12];
    s->m.f[13] = o->m.f[13];
    s->m.f[14] = o->m.f[14];
    s->m.f[15] = o->m.f[15];
    s->f4C = 0;
    s->f54 = 0.1f;
    s->f40 = 0;
    s->f44 = 0;
    s->f48 = 0;
    s->f50 = 0;
    func_0ECA98(s->f58, D_00211934[0], D_0022EE80);
    o->f68 = 0xFF80FF80u;
    o->f70 = 15.0f;
    o->f64 |= 0x80;
    o->b45 = 0;
    return 1;
}
