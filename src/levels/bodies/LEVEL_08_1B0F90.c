/* LEVEL_08:0x1B0F90 -- positions the object from a helper's vector, and once the owner's threshold is reached tears down its resources and ends its state, otherwise installs a callback. */

struct Inner1B0F90 {
    char pad_00[0x38];
    float f_38;
};
struct Link1B0F90 {
    void *p_00;
    char pad_04[0x08];
    struct Inner1B0F90 *p_0C;
};
struct Res1B0F90 {
    char pad_00[0x1DC];
    int w_1DC[7];
    char pad_1F8[0x1A8];
    void *p_3A0;
    char pad_3A4[0x26];
    unsigned char b_3CA;
};
struct Tag1B0F90 {
    char pad_00[0x08];
    unsigned char b_08;
};
struct Obj1B0F90 {
    char pad_00[0x30];
    float pos_30[3];
    char pad_3C[0x09];
    unsigned char b_45;
    char pad_46[0x0E];
    struct Link1B0F90 *p_54;
    struct Res1B0F90 *p_58;
    char pad_5C[0x08];
    int w_64;
};

extern float D_0026F7F8[];
extern int D_002853B8[];

struct Tag1B0F90 *func_08FEC8(int a);
void func_0900B8(int a, int b, int c);
void func_16F600(void *obj, float *out);
void func_1B0D50(struct Obj1B0F90 *o);
void func_1B37D8(float *v);
void func_0845F8(void *p, int a);
void func_1897A0(int w);
void func_088AA8(void *p);
void func_1B22A0(struct Obj1B0F90 *o, int b, int c);
void func_1B31D0(void);
void func_088BB8(struct Obj1B0F90 *o, void (*cb)(void), int c);

static __inline__ void vadd3(float *d, float *a, float *b)
{
    d[0] = a[0] + b[0];
    d[1] = a[1] + b[1];
    d[2] = a[2] + b[2];
}

void func_1B0F90(struct Obj1B0F90 *o)
{
    float v[3];
    struct Link1B0F90 *lk;
    struct Res1B0F90 *r;
    void *obj;
    unsigned int i;

    lk = o->p_54;
    func_0900B8(2, func_08FEC8(2)->b_08, 0xFF);
    o->w_64 = o->w_64 & ~0x20;
    obj = lk->p_00;
    func_16F600(obj, v);
    vadd3(o->pos_30, v, D_0026F7F8);
    func_1B0D50(o);
    func_1B37D8(v);
    if (lk->p_0C->f_38 <= v[2]) {
        func_0845F8(obj, 1);
        D_002853B8[0] = 0;
        r = o->p_58;
        if (r->b_3CA != 0) {
            for (i = 0; i < 7; i++) {
                func_1897A0(r->w_1DC[i]);
                r->w_1DC[i] = 0;
            }
            r->b_3CA = 0;
            if (r->p_3A0 != 0) {
                func_088AA8(r->p_3A0);
                r->p_3A0 = 0;
            }
        }
        func_1B22A0(o, o->b_45, 5);
    } else {
        func_088BB8(o, func_1B31D0, 1);
    }
}
