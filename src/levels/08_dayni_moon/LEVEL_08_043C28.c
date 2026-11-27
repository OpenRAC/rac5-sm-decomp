/* LEVEL_08:0x043C28 -- placement copy of LEVEL_01_03EB20.c: per-frame update of the player object: runs the state handlers, mirrors the position onto the linked part, refreshes the effect channels and eases the blend value. */
struct Obj;
typedef struct Obj Obj;
typedef struct Object Object;
typedef struct Actor Actor;

typedef struct V4 {
    float x, y, z, w;
} V4;

typedef struct Part {
    char pad0[0x30];
    V4 pos;
} Part;

typedef struct Hi {
    unsigned char b0 : 1;
    unsigned int rest : 31;
} Hi;

typedef union Flags {
    unsigned long long all;
    struct {
        unsigned int lo;
        Hi hi;
    } w;
} Flags;

typedef union Flags2 {
    unsigned long long all;
    struct {
        unsigned int lo;
        float f96C;
    } w;
} Flags2;

typedef struct Player {
    char pad0[0x30];
    V4 pos;
    char pad40[0x100 - 0x40];
    short state;
    short next;
    short prev;
    char pad106[0x2C0 - 0x106];
    float t2C0;
    char pad2C4[0x59C - 0x2C4];
    Part *link;
    char pad5A0[0x960 - 0x5A0];
    Flags flags;
    Flags2 flags2;
    char pad970[0x984 - 0x970];
    unsigned int cnt984;
    char pad988[0x994 - 0x988];
    float f994;
    char pad998[0xAA0 - 0x998];
    float tAA0;
    char padAA4[0xFC0 - 0xAA4];
    float fFC0;
    float fFC4;
    char padFC8[0xFCC - 0xFC8];
    unsigned char bFCC;
} Player;

typedef struct World {
    char pad0[0x24];
    int w24;
} World;

extern World *D_0023CB2C[1];

extern void func_040F08(void *obj);
extern void func_042F98(Player *p);
extern void func_0506A8(Player *p);
extern void func_069178(char *record);
extern int func_056AC0(Object *object);
extern void func_054738(Player *p);
extern int func_063118(Player *p);
extern int func_05BEE8(Player *p);
extern void func_061770(Player *p);
extern void func_043FE8(Player *p);
extern void func_0442A0(Player *p);
extern void func_0433C8(Player *p);
extern void func_041460(Player *p);
extern void func_0416C8(Player *p);
extern void func_043938(struct Obj *o, float d);
extern void func_043A30(Actor *a);
extern void func_051E40(Player *p);
extern void func_0524A0(Player *p);
extern int func_041448(char *object);
extern void func_003BD8(int a0);
extern void func_003C58(void);
extern int func_0299E0(int a0, int a1);
extern long long func_029A38(int a0);
extern void func_1374A8(float *dst, float *src);
extern void func_029AC0(int a, int b, float f, float *c);
extern void func_0298B8(Obj *o, float *acc, float dt);
extern void func_070830(Player *p, int a1);

static __inline__ void V4Copy(V4 *d, V4 *s)
{
    d->x = s->x;
    d->y = s->y;
    d->z = s->z;
    d->w = s->w;
}

static __inline__ float Clamp(float v, float lo, float hi)
{
    float *r;
    float *rv = &v;
    float *rl = &lo;
    float *rh = &hi;

    if (v < lo)
        r = rl;
    else if (hi < v)
        r = rh;
    else
        r = rv;
    return *r;
}

void func_043C28(Player *p, float dt)
{
    float buf[12];
    int r1;
    int r2;

    func_040F08(p);
    func_042F98(p);
    func_0506A8(p);
    func_069178((char *)p);
    func_056AC0((Object *)p);
    func_054738(p);
    func_063118(p);
    func_05BEE8(p);
    func_061770(p);
    func_043FE8(p);
    func_0442A0(p);
    if (p->state != 0xD && p->state != 0x25)
        func_0433C8(p);
    func_041460(p);
    func_0416C8(p);
    func_043938((struct Obj *)p, dt);
    func_043A30((Actor *)p);
    func_051E40(p);
    func_0524A0(p);
    p->t2C0 += 1.0f;
    if (p->cnt984 != 0) {
        p->cnt984 -= 1;
        if ((float)p->cnt984 < 0.0f)
            p->cnt984 = 0;
    }
    if (func_041448((char *)p) == 0) {
        if (p->flags2.w.f96C <= 0.0f && p->state != 0x37)
            p->next = 0x2A;
    }
    if (p->state != 0xD) {
        if (p->link != 0) {
            V4Copy(&p->link->pos, &p->pos);
            p->link->pos.y += p->f994;
        }
        if (p->state != 0xD && p->state != 0x1F) {
            if (D_0023CB2C[0]->w24 == 2)
                func_003BD8(0);
        }
    }
    if ((p->flags.all & 0x0080010000000000ULL) != 0)
        p->flags.all &= ~0x100000000ULL;
    if ((p->flags2.all & 0x40) == 0)
        func_003C58();
    r2 = (int)p + 0x5EC;
    r1 = (int)p + 0x7A8;
    func_0299E0(r2, p->flags.w.hi.b0);
    func_0299E0(r1, p->flags.w.hi.b0);
    if (func_029A38(r2) != 0 || func_029A38(r1) != 0) {
        func_1374A8(buf, (float *)p);
        func_029AC0(r2, p->flags.w.hi.b0, 0.016666668f, buf);
        func_029AC0(r1, p->flags.w.hi.b0, 0.016666668f, buf);
        if (p->bFCC != 0)
            func_0298B8((Obj *)r2, &p->f994, 0.016666668f);
    }
    func_070830(p, 0);
    p->fFC0 = Clamp(p->fFC0 + p->fFC4, 0.0f, 1.0f);
    p->fFC4 = -0.033332668f;
    if (p->state != p->prev) {
        p->prev = p->state;
        p->tAA0 = 0.0f;
    } else {
        p->tAA0 += 1.0f;
    }
}
