/* LEVEL_08:0x1C30B0 -- when both the slot and the record are fully set up, initialises the slot's two sub-areas, copies a float, derives the object's flag byte from func_0284E0 and raises the state to 2 when func_019920 reports a large enough value; returns 1, or 0 when anything is missing. */
struct Mat_018F38 {
    float m[16];
};

typedef struct {
    char pad00[0x10];
    int w10;
    char pad14[4];
    int w18;
    int w1C;
    int w20;
    char pad24[4];
    int w28;
    int w2C;
} Rec;

typedef struct {
    char pad00[0x18];
    int w18;
    int w1C;
    char pad20[4];
    char a24[0x38 - 0x24];
    float f38;
    char *p3C;
    char a40[0x54 - 0x40];
    unsigned char b54;
} Sub;

typedef struct {
    char pad00[0x34];
    float f34;
    char pad38[0x45 - 0x38];
    unsigned char b45;
    unsigned char b46;
    char pad47[0x54 - 0x47];
    Rec *rec;
    Sub *sub;
    char pad5C[4];
    int w60;
} Obj;

extern int D_00251EA0;
extern int D_00251E9C;
extern int D_00264470;
extern void func_09F4F0(void *a, int b, int c);
extern int func_0284E0(int a, int b);
extern int func_019920(struct Mat_018F38 *a0, struct Mat_018F38 *a1, unsigned short *a2, unsigned char *a3);

int func_1C30B0(Obj *o)
{
    Rec *rec;
    Sub *sub;
    int r;
    unsigned char buf[16];

    sub = o->sub;
    rec = o->rec;
    sub->w18 = 0;
    if (sub->w1C == 0)
        return 0;
    if (rec->w10 == 0)
        return 0;
    if (rec->w18 == 0)
        return 0;
    if (rec->w1C == 0)
        return 0;
    if (rec->w20 == 0)
        return 0;
    if (rec->w28 == 0)
        return 0;
    if (rec->w2C == 0)
        return 0;
    func_09F4F0(sub->a40, D_00251EA0, 0);
    func_09F4F0(sub->a24, D_00251E9C, 0);
    sub->f38 = o->f34;
    sub->p3C = sub->a40;
    r = func_0284E0(D_00264470, o->w60);
    if (r == 1)
        o->b46 = 1;
    else
        o->b46 = 0;
    sub->b54 = 0;
    buf[0] = 0;
    if (func_019920(0, 0, 0, buf) != 0) {
        if (buf[0] >= 2)
            o->b45 = 2;
    }
    return 1;
}
