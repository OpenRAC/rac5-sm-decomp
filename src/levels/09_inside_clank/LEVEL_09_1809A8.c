/* LEVEL_09:0x1809A8 -- three-state effect: state 0 waits for the query and clears a flag on the target, state 1 advances an angle by a fixed step up to pi (rotating each step), then dispatches on the target's type id and moves to state 2. */
typedef struct {
    float f[12];
} Rec;

typedef struct {
    char pad00[0x24];
    unsigned int id;
} Info;

typedef struct {
    char pad00[0x40];
    Info *info;
    char pad44[0x20];
    int flags;
} Target;

typedef struct {
    Target *target;
    int f04;
} Holder;

typedef struct {
    char pad00[0x45];
    unsigned char state;
    char pad46[0xE];
    Holder *holder;
    char pad58[0x18];
    float f70;
} Obj;

extern char *func_019740(void);
extern int func_0810E8(int a0, char *a1);
extern void func_11D500(Rec *a0, float a1);
extern void func_11EAB8(float *o, float *a, float *b);
extern void func_15F7C8(char *object);
extern void func_1A0700(char *object);

void func_1809A8(Obj *o)
{
    Holder *h = o->holder;
    Rec buf;
    Target *t;

    if (o->state == 0) {
        if (func_0810E8(h->f04, func_019740()) != 0) {
            h->target->flags = h->target->flags & ~0x20;
            o->state = 1;
            o->f70 = 0.0f;
        }
    } else if (o->state == 1) {
        o->f70 = o->f70 + 0.20000002f;
        if (o->f70 <= 3.1415927f) {
            func_11D500(&buf, 0.20000002f);
            func_11EAB8((float *)o, (float *)o, buf.f);
        } else {
            t = h->target;
            if (t->info->id == 0x36582BC7u) {
                func_15F7C8((char *)t);
            } else {
                func_1A0700((char *)t);
            }
            o->state = 2;
        }
    }
}
