/* LEVEL_01:0x03EB20 -- per-frame update of the player object: runs the state handlers, mirrors the position onto the linked part, refreshes the effect channels and eases the blend value. */
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

extern World *D_001F3FAC[1];

extern void func_03BE20(void *obj);
extern void func_03DE90(Player *p);
extern void func_04B5A0(Player *p);
extern void func_063950(char *record);
extern int func_0517A8(Object *object);
extern void func_04F420(Player *p);
extern int func_05D980(Player *p);
extern void func_056BD0(Player *p);
extern void func_05BFD8(Player *p);
extern void func_03EEE0(Player *p);
extern void func_03F198(Player *p);
extern void func_03E2C0(Player *p);
extern void func_03C378(Player *p);
extern void func_03C5C0(Player *p);
extern void func_03E830(struct Obj *o, float d);
extern void func_03E928(Actor *a);
extern void func_04CD38(Player *p);
extern void func_04D398(Player *p);
extern int func_03C360(char *object);
extern void func_003B70(int a0);
extern void func_003BF0(void);
extern int func_029468(int a0, int a1);
extern int func_0294C0(int a0);
extern void func_126218(float *dst, float *src);
extern void func_029548(int a, int b, float f, float *c);
extern void func_029340(Obj *o, float *acc, float dt);
extern void func_06AFE8(Player *p, int a1);

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

void func_03EB20(Player *p, float dt)
{
    float buf[12];
    int r1;
    int r2;

    func_03BE20(p);
    func_03DE90(p);
    func_04B5A0(p);
    func_063950((char *)p);
    func_0517A8((Object *)p);
    func_04F420(p);
    func_05D980(p);
    func_056BD0(p);
    func_05BFD8(p);
    func_03EEE0(p);
    func_03F198(p);
    if (p->state != 0xD && p->state != 0x25)
        func_03E2C0(p);
    func_03C378(p);
    func_03C5C0(p);
    func_03E830((struct Obj *)p, dt);
    func_03E928((Actor *)p);
    func_04CD38(p);
    func_04D398(p);
    p->t2C0 += 1.0f;
    if (p->cnt984 != 0) {
        p->cnt984 -= 1;
        if ((float)p->cnt984 < 0.0f)
            p->cnt984 = 0;
    }
    if (func_03C360((char *)p) == 0) {
        if (p->flags2.w.f96C <= 0.0f && p->state != 0x37)
            p->next = 0x2A;
    }
    if (p->state != 0xD) {
        if (p->link != 0) {
            V4Copy(&p->link->pos, &p->pos);
            p->link->pos.y += p->f994;
        }
        if (p->state != 0xD && p->state != 0x1F) {
            if (D_001F3FAC[0]->w24 == 2)
                func_003B70(0);
        }
    }
    if ((p->flags.all & 0x0080010000000000ULL) != 0)
        p->flags.all &= ~0x100000000ULL;
    if ((p->flags2.all & 0x40) == 0)
        func_003BF0();
    r2 = (int)p + 0x5EC;
    r1 = (int)p + 0x7A8;
    func_029468(r2, p->flags.w.hi.b0);
    func_029468(r1, p->flags.w.hi.b0);
    if (func_0294C0(r2) != 0 || func_0294C0(r1) != 0) {
        func_126218(buf, (float *)p);
        func_029548(r2, p->flags.w.hi.b0, 0.016666668f, buf);
        func_029548(r1, p->flags.w.hi.b0, 0.016666668f, buf);
        if (p->bFCC != 0)
            func_029340((Obj *)r2, &p->f994, 0.016666668f);
    }
    func_06AFE8(p, 0);
    p->fFC0 = Clamp(p->fFC0 + p->fFC4, 0.0f, 1.0f);
    p->fFC4 = -0.033332668f;
    if (p->state != p->prev) {
        p->prev = p->state;
        p->tAA0 = 0.0f;
    } else {
        p->tAA0 += 1.0f;
    }
}
