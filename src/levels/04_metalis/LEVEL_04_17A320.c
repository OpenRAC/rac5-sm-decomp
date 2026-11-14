/* LEVEL_04:0x17A320 -- tears down the object: runs the owner and record cleanups, then stops and clears the record's two sound handles and the remaining handle. */
typedef struct Sub {
    int w0;
    char *snd4;
    char *snd8;
} Sub;

typedef struct Rec {
    char pad0[0xD4];
    char *sndD4;
    char padD8[0x14];
    Sub sub;
    int wF8;
} Rec;

typedef struct Obj {
    char pad0[0x54];
    void **owner;
    Rec *rec;
} Obj;

extern void func_1D4E30(void *owner, int obj);
extern void func_1E14D0(Rec *r);
extern void func_07FAE8(char *handle, int flag);
extern void func_083F98(char *record);
extern void func_1E7138(int *p);

void func_17A320(Obj *o)
{
    Rec *r = o->rec;
    Sub *s;

    func_1D4E30(*o->owner, (int)o);
    s = &r->sub;
    func_1E14D0(r);
    if (s->snd4 != 0) {
        func_07FAE8(s->snd4, 1);
        s->snd4 = 0;
    }
    if (s->snd8 != 0) {
        func_083F98(s->snd8);
        s->snd8 = 0;
    }
    func_1E7138(&r->wF8);
    if (r->sndD4 != 0)
        func_07FAE8(r->sndD4, 1);
}
