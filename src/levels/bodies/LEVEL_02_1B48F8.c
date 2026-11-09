/* LEVEL_02:0x1B48F8 -- counts a timer down, checks a target position, and triggers a state change with mode 5 or 2. */

struct Cell1B48F8 {
    char pad0[0x45];
    unsigned char b45;
};

struct SubA1B48F8 {
    char pad0[0x2C];
    void *p2C;
    void *p30;
    char pad34[8];
    struct Cell1B48F8 *p3C;
};

struct SubB1B48F8 {
    char pad0[0x54];
    unsigned char b54;
};

struct Self1B48F8 {
    char pad0[0x30];
    float x30;
    char pad34[4];
    float z38;
    char pad3C[9];
    unsigned char b45;
    char pad46[0xE];
    struct SubA1B48F8 *p54;
    struct SubB1B48F8 *p58;
    char pad5C[0x14];
    float timer;
};

extern char D_0023D5D0[];
extern void func_01AC80(float *v);
extern int func_08B060(void *a, float *v);
extern int func_180D98(void *a, int b, char *tbl);
extern void func_1B3F68(struct Self1B48F8 *s, int b, int mode);

static __inline__ unsigned char target_near(struct Self1B48F8 *s, struct SubA1B48F8 *a)
{
    float vec[4];
    float dx;
    float dz;

    if (a->p3C != 0) {
        if (a->p3C->b45 != 2) {
            return 0;
        }
        a->p3C = 0;
    }
    func_01AC80(vec);
    if (func_08B060(a->p2C, vec) == 0) {
        return 0;
    }
    dx = s->x30 - vec[0];
    dz = s->z38 - vec[2];
    return dx * dx + dz * dz <= 625.0f;
}

void func_1B48F8(struct Self1B48F8 *s)
{
    struct SubA1B48F8 *a;
    struct SubB1B48F8 *b;

    s->timer = s->timer - 1.0f;
    a = s->p54;
    b = s->p58;
    if (target_near(s, a)) {
        func_1B3F68(s, s->b45, 5);
    } else if (s->timer <= 0.0f) {
        func_1B3F68(s, s->b45, 2);
    } else if (func_180D98(a->p30, b->b54, D_0023D5D0) != 0) {
        func_1B3F68(s, s->b45, 2);
    }
}
