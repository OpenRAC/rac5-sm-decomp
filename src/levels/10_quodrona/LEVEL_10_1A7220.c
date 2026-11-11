/* LEVEL_10:0x1A7220 -- twice gathers nearby entries around the owner's marker and calls each entry's handler with a randomly picked table value. */

struct Ent1A7220;
struct Obj1A7220;

struct Cls1A7220 {
    char pad_00[0x20];
    void (*fn_20)(struct Ent1A7220 *e, int a, int b, void *p30, void *p20, struct Obj1A7220 *o, float f);
};
struct Ent1A7220 {
    char pad_00[0x40];
    struct Cls1A7220 *c_40;
};
struct Owner1A7220 {
    struct Ent1A7220 *self_00;
    float v_04[3];
    char pad_10[0x34];
    float v_44[3];
};
struct Obj1A7220 {
    char pad_00[0x20];
    char p_20[0x10];
    char p_30[0x28];
    struct Owner1A7220 *own_58;
};

extern float D_0022EFB8[];
extern float D_0022EFC8[];

void func_123D68(float *buf, float *v, float *c);
unsigned int func_01BA68(struct Ent1A7220 **list, int max, float *buf, int a, int b, int c, int d, float r);
int func_027B98(void);

void func_1A7220(struct Obj1A7220 *o)
{
    float buf[4];
    struct Ent1A7220 *list[4];
    struct Owner1A7220 *own;
    float *q;
    int pass;
    unsigned int i;
    unsigned int n;
    struct Ent1A7220 *e;
    struct Cls1A7220 *c;

    own = o->own_58;
    q = own->v_44;
    func_123D68(buf, own->v_04, D_0022EFB8);
    pass = 0;
    do {
        n = func_01BA68(list, 4, buf, 0x129, 0x101, 0xAE3E, 1, 0.5f);
        for (i = 0; i < n; i++) {
            e = list[i];
            if (e != own->self_00) {
                c = e->c_40;
                if (c->fn_20 != 0) {
                    c->fn_20(list[i], 0, 3, o->p_30, o->p_20, o, D_0022EFC8[func_027B98()]);
                }
            }
        }
        func_123D68(buf, q, D_0022EFB8);
        pass++;
    } while (pass < 2);
}
