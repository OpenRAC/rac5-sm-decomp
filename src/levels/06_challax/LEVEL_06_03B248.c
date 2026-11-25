/* LEVEL_06:0x03B248 -- placement copy of LEVEL_01_03EB20.c: per-frame update of the player object: runs the state handlers, mirrors the position onto the linked part, refreshes the effect channels and eases the blend value. */
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

extern World *D_001E2EAC[1];

extern void func_038528(void *obj);
extern void func_03A5B8(Player *p);
extern void func_047CC8(Player *p);
extern void func_060710(char *record);
extern int func_04E058(Object *object);
extern void func_04BCD0(Player *p);
extern int func_05A6B0(Player *p);
extern void func_053480(Player *p);
extern void func_058D08(Player *p);
extern void func_03B608(Player *p);
extern void func_03B8C0(Player *p);
extern void func_03A9E8(Player *p);
extern void func_038A80(Player *p);
extern void func_038CE8(Player *p);
extern void func_03AF58(struct Obj *o, float d);
extern void func_03B050(Actor *a);
extern void func_049430(Player *p);
extern void func_049A90(Player *p);
extern int func_038A68(char *object);
extern void func_003B70(int a0);
extern void func_003BF0(void);
extern int func_027850(int a0, int a1);
extern int func_0278A8(int a0);
extern void func_11C728(float *dst, float *src);
extern void func_027930(int a, int b, float f, float *c);
extern void func_027728(Obj *o, float *acc, float dt);
extern void func_067DA8(Player *p, int a1);

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

void func_03B248(Player *p, float dt)
{
    float buf[12];
    int r1;
    int r2;

    func_038528(p);
    func_03A5B8(p);
    func_047CC8(p);
    func_060710((char *)p);
    func_04E058((Object *)p);
    func_04BCD0(p);
    func_05A6B0(p);
    func_053480(p);
    func_058D08(p);
    func_03B608(p);
    func_03B8C0(p);
    if (p->state != 0xD && p->state != 0x25)
        func_03A9E8(p);
    func_038A80(p);
    func_038CE8(p);
    func_03AF58((struct Obj *)p, dt);
    func_03B050((Actor *)p);
    func_049430(p);
    func_049A90(p);
    p->t2C0 += 1.0f;
    if (p->cnt984 != 0) {
        p->cnt984 -= 1;
        if ((float)p->cnt984 < 0.0f)
            p->cnt984 = 0;
    }
    if (func_038A68((char *)p) == 0) {
        if (p->flags2.w.f96C <= 0.0f && p->state != 0x37)
            p->next = 0x2A;
    }
    if (p->state != 0xD) {
        if (p->link != 0) {
            V4Copy(&p->link->pos, &p->pos);
            p->link->pos.y += p->f994;
        }
        if (p->state != 0xD && p->state != 0x1F) {
            if (D_001E2EAC[0]->w24 == 2)
                func_003B70(0);
        }
    }
    if ((p->flags.all & 0x0080010000000000ULL) != 0)
        p->flags.all &= ~0x100000000ULL;
    if ((p->flags2.all & 0x40) == 0)
        func_003BF0();
    r2 = (int)p + 0x5EC;
    r1 = (int)p + 0x7A8;
    func_027850(r2, p->flags.w.hi.b0);
    func_027850(r1, p->flags.w.hi.b0);
    if (func_0278A8(r2) != 0 || func_0278A8(r1) != 0) {
        func_11C728(buf, (float *)p);
        func_027930(r2, p->flags.w.hi.b0, 0.016666668f, buf);
        func_027930(r1, p->flags.w.hi.b0, 0.016666668f, buf);
        if (p->bFCC != 0)
            func_027728((Obj *)r2, &p->f994, 0.016666668f);
    }
    func_067DA8(p, 0);
    p->fFC0 = Clamp(p->fFC0 + p->fFC4, 0.0f, 1.0f);
    p->fFC4 = -0.033332668f;
    if (p->state != p->prev) {
        p->prev = p->state;
        p->tAA0 = 0.0f;
    } else {
        p->tAA0 += 1.0f;
    }
}
