/* LEVEL_10:0x175110 -- melee hit window: for the current swing picks which hands are live in its timing window, then sweeps each live hand and damages the first other actor it touches. */
typedef struct {
    float x;
    float y;
    float z;
    float w;
} Vec4_t;

typedef struct {
    char pad_00[0x20];
    int w_20;
} Kind;

typedef struct {
    char pad_00[0x40];
    Kind *kind_40;
} Actor;

typedef struct {
    char pad_00[0x10];
    Actor *victim_10;
    int type_14;
    char pad_18[8];
} Hit_t;

typedef struct {
    char pad_00[0x144];
    char bones_144[2][0x40];
} Body;

typedef struct {
    char pad_00[0x58];
    Body *body_58;
} Owner;

typedef enum {
    SWING_NONE = -1
} Swing;

typedef struct {
    Owner *owner_00;
    char pad_04[0xE0];
    Swing swing_E4;
} Atk;

extern float D_0022A458[];
extern float func_1731E8(Atk *a);
extern void func_123D68(float *out, float *m, float *src);
extern int func_01F3A8(Vec4_t *a, Vec4_t *b, Vec4_t *c, Vec4_t *d, Vec4_t *e, Hit_t *f, void *g, int h, int i, int j, float w);
extern void func_1738C8(Atk *a, Actor *v, float dmg, int lvl, Vec4_t *at);

void func_175110(Atk *a)
{
    Vec4_t pt;
    Vec4_t p0;
    Vec4_t p1;
    Vec4_t p2;
    Vec4_t p3;
    Hit_t hit;
    Vec4_t p4;
    Body *b;
    float t;
    float dmg;
    int lvl;
    int mask;
    int i;

    dmg = 0.0f;
    lvl = 0;
    mask = 0;
    b = a->owner_00->body_58;
    t = func_1731E8(a);
    switch (a->swing_E4) {
    case 12:
        if (0.30000001192092896f <= t && t <= 0.5f) {
            mask = 1;
        }
        dmg = 1.0f;
        lvl = 2;
        break;
    case 11:
        if (0.30000001192092896f <= t && t <= 0.5f) {
            mask = 2;
        }
        dmg = 1.0f;
        lvl = 2;
        break;
    case 10:
        if (0.44999998807907104f <= t && t <= 0.6499999761581421f) {
            mask = 3;
        }
        dmg = 2.0f;
        lvl = 3;
        break;
    }
    for (i = 0; i < 2; i++) {
        if (!((mask >> i) & 1)) {
            continue;
        }
        func_123D68(&pt.x, (float *)b->bones_144[i], &D_0022A458[i * 3]);
        if (func_01F3A8(&p0, &p1, &p2, &p3, &p4, &hit, &pt, 0x68, 0, 0, 1.5f) == 0) {
            continue;
        }
        if (hit.type_14 != 2) {
            continue;
        }
        if (hit.victim_10 == (Actor *)a->owner_00) {
            continue;
        }
        if (hit.victim_10->kind_40->w_20 == 0) {
            continue;
        }
        func_1738C8(a, hit.victim_10, dmg, lvl, &p1);
    }
}
