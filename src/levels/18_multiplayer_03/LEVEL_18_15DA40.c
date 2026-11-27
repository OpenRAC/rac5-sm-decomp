/* LEVEL_18:0x15DA40 -- counts down a timer and triggers the follow-up action when it expires. */
typedef struct {
    char pad0[0x14];
    unsigned int flags;
    char pad18[0x14];
    int kind;
} Sub;

typedef struct {
    char pad0[0xC0];
    Sub sub;
    char pad_f0[0xF4 - 0xC0 - sizeof(Sub)];
    int f4;
} Owner;

typedef struct {
    Owner *owner;
    char pad4[0xC];
    char data[0xC];
    float timer;
    char pad20[0xC];
    unsigned char f2C;
} State;

typedef struct {
    int kind;
    char pad4[0xC];
} Info;

typedef struct {
    char pad0[0x54];
    int *link;
    State *st;
} Obj;

extern int func_159CF0(int a);
extern Info *func_0181B8(Info *i);
extern unsigned int func_1141D0(void);
extern void func_15E0D8(Obj *o);
extern void func_15DD60(Obj *o, char *p, Owner *ow);

void func_15DA40(Obj *o, float dt)
{
    State *s = o->st;
    int *link = o->link;
    Owner *ow = s->owner;
    Sub *sub = &ow->sub;
    long long hit;
    int t;
    Info info;

    s->timer = s->timer - dt;
    if (s->timer < 0.0f) {
        s->timer = 0.0f;
    }
    hit = 0;
    if (sub->kind == 0x10) {
        if (sub->flags & 0x6000) {
            if (s->timer == 0.0f) {
                if (func_159CF0(*link)) {
                    func_0181B8(&info);
                    if (info.kind == 4) {
                        t = func_1141D0() == 0;
                        hit = t;
                    }
                }
            }
        }
    }
    if ((hit & 0xFF) != 0) {
        if (ow->f4) {
            func_15E0D8(o);
        }
        func_15DD60(o, s->f2C ? s->data : 0, s->owner);
    }
}
