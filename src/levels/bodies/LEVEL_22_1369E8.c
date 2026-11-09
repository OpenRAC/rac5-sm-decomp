/* LEVEL_22:0x1369E8 -- placement copy of LEVEL_03_1C4BC8.c: optionally dispatches a scaled pair, then decrements four positive timers by one. */
struct Cfg {
    char pad[8];
    unsigned char flag;
};
struct St {
    char pad0[0x28];
    float f28;
    float f2C;
    char pad1[0xB0 - 0x30];
    float fB0;
    char pad2[0xD0 - 0xB4];
    float fD0;
    float fD4;
    float fD8;
};
struct Act {
    char pad0[0x30];
    char f30;
    char pad1[0x54 - 0x31];
    struct Cfg *cfg;
    struct St *st;
};
extern void func_09FC20(char *p, float a, float b);

void func_1369E8(struct Act *a)
{
    struct St *s;

    s = a->st;
    if (a->cfg->flag == 0)
        func_09FC20(&a->f30, s->f2C * 30.0f, s->f28 * 30.0f);
    if (s->fD0 > 0.0f)
        s->fD0 -= 1.0f;
    if (s->fD4 > 0.0f)
        s->fD4 -= 1.0f;
    if (s->fB0 > 0.0f)
        s->fB0 -= 1.0f;
    if (s->fD8 > 0.0f)
        s->fD8 -= 1.0f;
}
