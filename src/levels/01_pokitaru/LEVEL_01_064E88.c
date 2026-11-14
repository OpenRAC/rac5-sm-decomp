/* LEVEL_01:0x064E88 -- when the state flag is clear and a global handle is set, calls a helper with the object's link, the handle, the flag address and the handle's float quad. */
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

extern State D_00239158;
extern Thing *D_001F49F0;

extern void func_0809D0(void *a, Thing *b, int *c, int d, int e, int f, int g, int h,
                        float f12, float f13, float f14, float f15);

void func_064E88(Obj *o)
{
    State *s = &D_00239158;
    Thing *t;
    void *link;
    int *flag;

    if (s->flag == 0) {
        link = o->link;
        t = D_001F49F0;
        flag = &s->flag;
        if (t != 0) {
            func_0809D0(link, t, flag, 0, 0, 0, 0, 1, t->f_14, t->f_18, t->f_1C, t->f_20);
        }
    }
}
