/* LEVEL_02:0x1A1220 -- when the sub-record flag is clear and a global handle is set, calls a helper with the handle's float triple and the record's sub-field address. */

struct Obj;

struct Sub {
    char pad_00[0x28];
    int w_28;
};

struct Obj {
    char pad_00[0x54];
    struct Sub *p_54;
};

struct Thing {
    char pad_00[0x14];
    float f_14;
    float f_18;
    float f_1C;
    float f_20;
};

extern struct Thing *D_0021D5D4;

void func_0872A0(struct Obj *a0, struct Thing *a1, void *a2, int a3, int a4, int a5, int a6, int a7,
                 float f12, float f13, float f14, float f15);

void func_1A1220(struct Obj *a0)
{
    struct Sub *s;
    struct Thing *t;
    char *p;

    s = a0->p_54;
    if (s->w_28 == 0) {
        p = (char *)s + 0x28;
        t = D_0021D5D4;
        if (t != 0) {
            func_0872A0(a0, t, p, 0, 0, 0, 0, 1, t->f_14, t->f_18, t->f_1C, t->f_20);
        }
    }
}
