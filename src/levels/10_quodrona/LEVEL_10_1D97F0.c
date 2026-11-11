/* LEVEL_10:0x1D97F0 -- placement copy of LEVEL_01_1D3BE0.c: resets an object's list node with the shared table, links it to a source (copying its fields and releasing the source's slot) when given one, then restarts its four counters. */
struct Link { int f0, f4, f8; struct Link *next, *prev; int value, f18; };

struct Src18 {
    char pad0[0x30];
    unsigned int w30;
    unsigned int w34;
    char pad1[0x44 - 0x38];
    unsigned int w44;
    unsigned int w48;
};

struct Dst18 {
    char pad0[0x1C];
    struct Src18 *p1C;
    char pad1[0x30 - 0x20];
    unsigned int w30;
    unsigned int w34;
};

struct Obj {
    char pad0[0x20];
    int w20;
    int w24;
    int w28;
    int w2C;
};

struct Src {
    char pad0[0x28];
    int w28;
};

extern char D_00233C08[];
extern void func_0A0BF8(struct Link *node, int value);
extern void func_1D9860(struct Dst18 *a0, struct Src18 *a1);
extern void func_0EF088(int index);

void func_1D97F0(struct Obj *o, struct Src *src)
{
    func_0A0BF8((struct Link *)o, (int)D_00233C08);
    if (src != 0) {
        func_1D9860((struct Dst18 *)o, (struct Src18 *)src);
        func_0EF088(src->w28);
    }
    o->w20 = 0;
    o->w24 = 0;
    o->w28 = 0x75;
    o->w2C = 0;
}
