/* LEVEL_08:0x1859E0 -- placement copy of LEVEL_04_17A320.c: tears down the object: runs the owner and record cleanups, then stops and clears the record's two sound handles and the remaining handle. */
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

extern void func_1F9DB0(void *owner, int obj);
extern void func_208AA8(Rec *r);
extern void func_0845F8(char *handle, int flag);
extern void func_088AA8(char *record);
extern void func_20ED08(int *p);

void func_1859E0(Obj *o)
{
    Rec *r = o->rec;
    Sub *s;

    func_1F9DB0(*o->owner, (int)o);
    s = &r->sub;
    func_208AA8(r);
    if (s->snd4 != 0) {
        func_0845F8(s->snd4, 1);
        s->snd4 = 0;
    }
    if (s->snd8 != 0) {
        func_088AA8(s->snd8);
        s->snd8 = 0;
    }
    func_20ED08(&r->wF8);
    if (r->sndD4 != 0)
        func_0845F8(r->sndD4, 1);
}
