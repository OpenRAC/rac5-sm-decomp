/* LEVEL_09:0x061A88 -- placement copy of LEVEL_01_064E88.c: when the state flag is clear and a global handle is set, calls a helper with the object's link, the handle, the flag address and the handle's float quad. */
typedef struct {
    char pad[0x38];
    int flag;
} State;

typedef struct {
    char pad_00[0x14];
    float f_14;
    float f_18;
    float f_1C;
    float f_20;
} Thing;

typedef struct {
    char pad[0x59C];
    void *link;
} Obj;

extern State D_002208D8;
extern Thing *D_001DE7F0;

extern void func_07D450(void *a, Thing *b, int *c, int d, int e, int f, int g, int h,
                        float f12, float f13, float f14, float f15);

void func_061A88(Obj *o)
{
    State *s = &D_002208D8;
    Thing *t;
    void *link;
    int *flag;

    if (s->flag == 0) {
        link = o->link;
        t = D_001DE7F0;
        flag = &s->flag;
        if (t != 0) {
            func_07D450(link, t, flag, 0, 0, 0, 0, 1, t->f_14, t->f_18, t->f_1C, t->f_20);
        }
    }
}
