/* LEVEL_19:0x06F9A8 -- placement copy of LEVEL_16_06F940.c: releases an object's link when its flag is set. */
typedef struct Obj Obj;

typedef struct {
    char pad0[0x3C];
    int flags;
} Info;

typedef struct {
    char pad0[0x10];
    Info *info;
    char pad14[4];
    void (*fn)(Obj *);
    char pad1C[0x24];
    unsigned short c40;
    unsigned short c42;
} Link;

struct Obj {
    char pad0[0x40];
    Link *link;
    char pad44[0x20];
    int flags;
};

extern void func_0753B0(Obj *o);
extern void func_06FA88(Obj *o);

void func_06F9A8(Obj *o)
{
    if (o->flags & 1) {
        func_0753B0(o);
        o->link->fn(o);
        if (o->flags & 1) {
            if (o->link) {
                o->link->c40--;
            }
        }
        o->flags &= ~1;
        if (o->link->info && (o->link->info->flags & 0x80)) {
            func_06FA88(o);
        } else {
            if (!(o->flags & 6)) {
                if (o->link) {
                    o->link->c42++;
                }
            }
            o->flags |= 6;
        }
    }
}
