/* LEVEL_10:0x18DE90 -- after two guarded helper checks, plays each valid id of one of two 8-byte id lists. */
typedef struct Sub { char pad00[8]; void *f08; char pad0C[0x29 - 0xC]; unsigned char a29[8]; unsigned char a31[8]; char pad39[0x50 - 0x39]; void *f50; } Sub;
typedef struct Cfg { char pad00[0x18]; unsigned char f18; } Cfg;
typedef struct Obj { char pad00[0x54]; Sub *sub; Cfg *cfg; } Obj;
extern int func_018D08(void);
extern int func_084D08(void *a0, void *a1);
extern char *func_000F68(void);
extern void func_017978(int a0, int a1);

void func_18DE90(Obj *o)
{
    Sub *s = o->sub;
    Cfg *c = o->cfg;
    unsigned char *ids;
    char *t;
    int r;

    if (s->f08 != 0) {
        r = func_018D08();
        if (r == 0)
            return;
        if (func_084D08(s->f08, (void *)r) == 0)
            return;
    }
    ids = s->a31;
    if (c->f18 != 0)
        ids = s->a29;
    t = func_000F68();
    if (s->f50 != 0) {
        if (func_084D08(s->f50, t + 0x30) != 0)
            return;
    }
    {
        unsigned char *p = ids;
        unsigned char *end = ids + 8;

        do {
            if (*p != 0xFF)
                func_017978(*p, 0);
            p++;
        } while (p < end);
    }
}
