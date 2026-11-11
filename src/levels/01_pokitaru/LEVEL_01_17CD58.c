/* LEVEL_01:0x17CD58 -- placement copy of LEVEL_07_1896B8.c: applies five scaled parameters through setters, unless disabled; returns whether it ran. */
struct Cfg {
    float f[5];
    unsigned char on;
};
struct Self {
    char pad[0x30];
    char at30[0x24];
    struct Cfg *cfg;
};
struct World {
    char pad[0x10513];
    unsigned char flag;
};
extern struct World *D_001F3FAC;
extern int D_0021A7F0;
extern int func_027680(int a);
extern void func_0018A0(int a);
extern void func_003170(void *p, int a, float f);
extern void func_0036E8(float x, int a, float y, int b);
extern void func_003718(float x, int a, float y, int b);
extern void func_003888(float x, int a, float y, int b);
extern void func_003838(float x, int a, float y, int b);
extern void func_003748(float x, float y, int a, int b);
extern void func_03BDF8(int a);

int func_17CD58(struct Self *self)
{
    struct Cfg *c;

    c = self->cfg;
    if (D_001F3FAC->flag == 0) {
        if (c->on == 0 || func_027680(D_0021A7F0 + 1) == 0) {
            func_0018A0(0);
            func_003170(self->at30, 1, 0.0f);
            func_0036E8(c->f[0], 200, 1.0f, 3);
            func_003718(c->f[1], 200, 1.0f, 3);
            func_003888(c->f[2], 200, 1.0f, 3);
            func_003838(c->f[3], 200, 1.0f, 3);
            func_003748(c->f[4], 1.0f, 200, 3);
            func_03BDF8(1);
            return 1;
        }
    }
    return 0;
}
