/* LEVEL_07:0x1A3478 -- placement copy of LEVEL_03_197BA8.c: loads a preset entry into the owner's state block. */
struct Bytes8 {
    unsigned char b[8];
};
struct Preset {
    float f[10];
    struct Bytes8 col;
    float g0, g1, g2, g3, g4;
    unsigned char c;
    char pad[3];
};
struct State {
    char pad0[4];
    float f[10];
    float h;
    char pad30[0x0];
    struct Bytes8 col;
    float g0, g1, g4, g3;
    unsigned char kind;
    unsigned char c;
};
struct Own {
    char pad[0x54];
    struct State *st;
};
extern struct Preset D_0021D1E8[];
extern void func_07E7F0(struct Own *o, int v);

void func_1A3478(struct Own *o, int idx)
{
    struct State *s = o->st;
    struct Preset *p;

    if (s->kind >= 5)
        func_07E7F0(o, 1);
    p = &D_0021D1E8[idx];
    s->f[0] = p->f[0];
    s->f[1] = p->f[1];
    s->f[2] = p->f[2];
    s->f[3] = p->f[3];
    s->f[4] = p->f[4];
    s->f[5] = p->f[5];
    s->f[6] = p->f[6];
    s->f[7] = p->f[7];
    s->f[8] = p->f[8];
    s->f[9] = p->f[9];
    s->h = p->g2;
    s->col.b[0] = p->col.b[0];
    s->col.b[1] = p->col.b[1];
    s->col.b[2] = p->col.b[2];
    s->col.b[3] = p->col.b[3];
    s->col.b[4] = p->col.b[4];
    s->col.b[5] = p->col.b[5];
    s->col.b[6] = p->col.b[6];
    s->col.b[7] = p->col.b[7];
    s->g0 = p->g0;
    s->g1 = p->g1;
    s->g4 = p->g4;
    s->g3 = p->g3;
    s->c = p->c;
}
