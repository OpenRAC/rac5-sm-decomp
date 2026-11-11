/* FRONTEND:0x01B8E0 -- sets up a scene object, applies a rectangle and colours, then queues fifteen entries and flags it. */

struct Obj01B8E0 {
    char pad_00[0x14];
    unsigned int flags_14;
};

struct Rect01B8E0 {
    short v[8];
};

struct Pair01B8E0 {
    unsigned int a;
    unsigned int b;
};

extern struct Obj01B8E0 D_00197600;
extern char D_00030D38[];
extern struct Rect01B8E0 D_00108F60;
extern struct Pair01B8E0 D_00031D40[];

void func_012418(void *o, void *src, int a, int b);
void func_012770(void *o, int a, int b, int c, int d);
void func_012758(void *o, int a, unsigned int b);
int func_012340(void *o, unsigned int a, unsigned int b);
int func_012370(void *o, int a, int b);
void func_012848(void *o, unsigned int a, unsigned int b, int c, int d, int e, int f, int g, int h, unsigned int i);
int func_0124F0(void *o);

void func_01B8E0(void)
{
    struct Rect01B8E0 r;
    struct Pair01B8E0 *p;
    unsigned int i;

    func_012418(&D_00197600, D_00030D38, 0x1000, 0);
    r = D_00108F60;
    i = 0;
    func_012770(&D_00197600, r.v[0], r.v[2], r.v[4], r.v[6]);
    func_012758(&D_00197600, 0x1D7, 0xFFFFFFFF);
    func_012340(&D_00197600, 0x40602020, 0xFFB07050);
    p = D_00031D40;
    do {
        func_012370(&D_00197600, 1, 1);
        i++;
        func_012848(&D_00197600, p->a, p->b, 0, 0, 0, 1, 1, 0, 0xFFFFFFFF);
        p++;
    } while (i < 15);
    D_00197600.flags_14 |= 0x14;
    func_0124F0(&D_00197600);
}
