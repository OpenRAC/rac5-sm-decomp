/* LEVEL_03:0x03CAF0 -- placement copy of LEVEL_01_03E830.c: decays a set of timers by a step and clamps them at zero. */
struct Obj {
    char pad0[0x100];
    short s100;
    char pad1[0x5A0 - 0x102];
    void *p5A0;
    char pad2[0xA84 - 0x5A4];
    float t84;
    char pad3[4];
    float t8C;
    float t90;
    char pad4[4];
    float t98;
    float t9C;
};
extern int func_07CC20(void *p);

void func_03CAF0(struct Obj *o, float d)
{
    o->t84 = o->t84 - d;
    o->t8C = o->t8C - d;
    o->t98 = o->t98 - d;
    o->t9C = o->t9C - d;
    o->t90 = o->t90 - d;
    if (o->t84 < 0.0f)
        o->t84 = 0.0f;
    if (o->s100 == 0 && o->p5A0 != 0 && func_07CC20(o->p5A0) == 0) {
        if (o->t8C < 0.0f)
            o->t8C = 0.0f;
    }
    if (o->t98 <= 0.0f)
        o->t98 = 0.0f;
    if (o->t9C <= 0.0f)
        o->t9C = 0.0f;
    if (o->t90 <= 0.0f)
        o->t90 = 0.0f;
}
