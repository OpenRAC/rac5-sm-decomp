/* LEVEL_02:0x040D50 -- updates one bit of a word in a sub-record from the flag argument, then calls a helper when a short field matches and the flag is zero. */

struct Sub {
    unsigned char pad0[0x64];
    int w64;
};

struct Obj {
    unsigned char pad0[0x100];
    short h100;
    unsigned char pad1[0x59C - 0x102];
    struct Sub *p59C;
};

void func_0689E0(struct Obj *o);

void func_040D50(struct Obj *o, int flag)
{
    struct Sub *s;

    s = o->p59C;
    s->w64 = (s->w64 & -33) | (((flag ^ 1) & 1) << 5);
    if (o->h100 == 0x21) {
        if (flag == 0) {
            func_0689E0(o);
        }
    }
}
