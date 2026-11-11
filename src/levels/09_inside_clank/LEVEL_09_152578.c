/* LEVEL_09:0x152578 -- placement copy of LEVEL_02_1749B0.c: notifies nearby objects through their table callback, then runs a fixed sequence of helpers on the object. */

typedef struct {
    float x;
    float y;
    float z;
} Vec3;

struct Obj;

typedef struct {
    char pad_00[0x20];
    void (*fn_20)(struct Obj *, int, float, int, Vec3 *, int, struct Obj *);
} Tbl;

typedef struct Obj {
    char pad_00[0x30];
    Vec3 pos_30;
    char pad_3C[4];
    Tbl *tbl_40;
    char pad_44[1];
    unsigned char b_45;
} Obj;

extern void func_0EB810(int a, Vec3 *v);
extern int func_01B7D8(Obj **list, int max, Vec3 *pos, int a, int b, int c, int d, float f);
extern void func_0127B0(Vec3 *p, float a, float b, float c, float d, float e, float f);
extern void func_1B11A0(Obj *o);
extern void func_151988(Obj *o, int a, int b);
extern void func_14E438(Obj *o);
extern void func_079108(Obj *o, int a);

void func_152578(Obj *o)
{
    Vec3 loc;
    Obj *list[64];
    int n;
    int i;
    Obj *e;

    loc.x = o->pos_30.x;
    loc.y = o->pos_30.y + 0.5f;
    loc.z = o->pos_30.z;
    func_0EB810(7, &loc);
    n = func_01B7D8(list, 0x40, &o->pos_30, 0x129, 0x101, 0xAE3E, 1, 2.5f);
    for (i = 0; i < n; i++) {
        e = list[i];
        if (e != o) {
            if (e->tbl_40->fn_20 != 0) {
                e->tbl_40->fn_20(e, 0, 1.0f, 1, &o->pos_30, 0, o);
            }
        }
    }
    func_0127B0(&o->pos_30, 25.0f, 144.0f, 100.0f, 8.0f, 10.0f, 0.5f);
    func_1B11A0(o);
    func_151988(o, 1, 0);
    func_14E438(o);
    o->b_45 = 2;
    func_079108(o, 1);
}
