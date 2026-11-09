/* LEVEL_08:0x19A0A0 -- tracks a target flag with a countdown, then reports whether the player is close and facing the object. */

struct Sub19A0A0 {
    char pad0[0x44];
    unsigned short h44;
    char pad46;
    unsigned char b47;
};

struct Cfg19A0A0 {
    char pad0[0x30];
    int w30;
};

struct Obj19A0A0 {
    char pad0[0x20];
    float f20;
    char pad24[4];
    float f28;
    char pad2C[4];
    float f30;
    char pad34[4];
    float f38;
    char pad3C[0x18];
    struct Cfg19A0A0 *p54;
    struct Sub19A0A0 *p58;
};

struct Pos19A0A0 {
    float x;
    float y;
    float z;
};

struct Tab19A0A0 {
    char pad0[0x30];
    int w30;
};

extern struct Tab19A0A0 D_002843D0;
extern int func_08C780(int a, void *b);
extern struct Pos19A0A0 *func_01ACA0(void);
extern float sqrtf(float x);

int func_19A0A0(struct Obj19A0A0 *o)
{
    struct Sub19A0A0 *s;
    struct Pos19A0A0 *pos;
    float v[2];
    float d2;
    float inv;
    int x;
    char *g;

    s = o->p58;
    g = (char *)&D_002843D0;
    x = func_08C780(o->p54->w30, g + 0x30);
    if (s->h44 != 0) {
        s->h44 = s->h44 - 1;
    } else if (x != 0) {
        if (s->b47 == 0) {
            s->b47 = x;
            return 6;
        }
    }
    s->b47 = x;
    if (x == 0) {
        return 2;
    }
    pos = func_01ACA0();
    v[0] = pos->x - o->f30;
    v[1] = pos->z - o->f38;
    d2 = v[0] * v[0] + v[1] * v[1];
    if (d2 <= 2.25f) {
        inv = 1.0f / sqrtf(d2);
        v[0] = v[0] * inv;
        v[1] = v[1] * inv;
        if (v[0] * o->f20 + v[1] * o->f28 >= 0.949999988079071f) {
            return 8;
        }
        return 7;
    }
    return 2;
}
