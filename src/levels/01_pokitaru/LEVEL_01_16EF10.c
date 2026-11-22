/* LEVEL_01:0x16EF10 -- searches the object's twelve records for the first entry (other than a given one) whose linked profile accepts the probe, and returns it. */
typedef struct {
    int w00;
    int w04;
} Prof;

typedef struct {
    char pad00[0x10];
    Prof *prof10;
    int w14;
} Slot;

typedef struct {
    char pad00[4];
    Slot *slots;
} Info;

typedef struct {
    char pad00[0x40];
    Info *info;
    char pad44;
} Ent;

typedef struct {
    Ent *e;
    char pad04[0x1C - 4];
} Rec;

typedef struct {
    char pad00[0x58];
    Rec *recs;
} Obj;

extern int func_01F3B0(int a, int b, int c, float f, Ent *e);
extern int func_113618(int a, int b, float f, Ent *e);

Ent *func_16EF10(Obj *o, Ent *skip, int arg, float f)
{
    int i;
    Rec *r;
    Ent *e;
    Slot *s;

    for (i = 0; i < 12; i++) {
        r = o->recs + i;
        e = r->e;
        if (e == 0 || e == skip) {
            continue;
        }
        s = (Slot *)((char *)e->info->slots + ((unsigned char *)e)[0x44] * 0x34);
        if (s->prof10 != 0) {
            if ((unsigned char)func_01F3B0(arg, s->prof10->w04, *(unsigned char *)s->prof10, f, e) != 0) {
                return e;
            }
        } else {
            if ((unsigned char)func_113618(arg, s->w14, f, e) != 0) {
                return e;
            }
        }
    }
    return 0;
}
