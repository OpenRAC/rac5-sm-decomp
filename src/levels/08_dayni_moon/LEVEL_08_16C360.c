/* LEVEL_08:0x16C360 -- placement copy of LEVEL_04_1655D0.c: while the object is within 2.5 units of the player and the input state is right: releases the held state, registers the interaction and, when the button bit is set, triggers the shared prompt; otherwise raises the object's near flag. */
typedef struct {
    char pad00[0x30];
    float pos[3];
    char pad3C[0xA];
    unsigned char b46;
} Obj;

extern char D_002843D0[];

extern int func_16C488(Obj *o);
extern void func_01AC70(float *out);
extern int func_08FE98(void);
extern void func_0C01D8(int a);
extern int func_1439E8(int a);
extern void func_0C0280(int a, int b, int c, int d);
extern int func_08FFD8(int a);
extern int func_0703C8(char *p);
extern void func_070288(char *p, int a);
extern int func_0C7320(int a, int b);

static __inline__ void Sub3(float *d, float *a, float *b)
{
    d[0] = a[0] - b[0];
    d[1] = a[1] - b[1];
    d[2] = a[2] - b[2];
}

void func_16C360(Obj *o)
{
    float p[4];
    float d[4];

    if (func_16C488(o) != 0) {
        return;
    }
    func_01AC70(p);
    Sub3(d, p, o->pos);
    if (d[0] * d[0] + d[1] * d[1] + d[2] * d[2] <= 6.25f && func_08FE98() == 2) {
        if (o->b46 != 0) {
            func_0C01D8(0);
            o->b46 = 0;
        }
        func_0C0280(0, func_1439E8(1), 0, 0);
        if (func_08FFD8(2) & 0x1000) {
            if (func_0703C8(D_002843D0) != 0) {
                func_070288(D_002843D0, 1);
            }
            func_0C7320(0xB, 0);
        }
    } else {
        o->b46 = 1;
    }
}
