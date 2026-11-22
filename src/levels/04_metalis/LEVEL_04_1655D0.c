/* LEVEL_04:0x1655D0 -- while the object is within 2.5 units of the player and the input state is right: releases the held state, registers the interaction and, when the button bit is set, triggers the shared prompt; otherwise raises the object's near flag. */
typedef struct {
    char pad00[0x30];
    float pos[3];
    char pad3C[0xA];
    unsigned char b46;
} Obj;

extern char D_0024F950[];

extern int func_1656F8(Obj *o);
extern void func_019F78(float *out);
extern int func_08B0E0(void);
extern void func_0BAAF0(int a);
extern int func_13E930(int a);
extern void func_0BAB98(int a, int b, int c, int d);
extern int func_08B220(int a);
extern int func_06C5E8(char *p);
extern void func_06C4A8(char *p, int a);
extern int func_0C1C10(int a, int b);

static __inline__ void Sub3(float *d, float *a, float *b)
{
    d[0] = a[0] - b[0];
    d[1] = a[1] - b[1];
    d[2] = a[2] - b[2];
}

void func_1655D0(Obj *o)
{
    float p[4];
    float d[4];

    if (func_1656F8(o) != 0) {
        return;
    }
    func_019F78(p);
    Sub3(d, p, o->pos);
    if (d[0] * d[0] + d[1] * d[1] + d[2] * d[2] <= 6.25f && func_08B0E0() == 2) {
        if (o->b46 != 0) {
            func_0BAAF0(0);
            o->b46 = 0;
        }
        func_0BAB98(0, func_13E930(1), 0, 0);
        if (func_08B220(2) & 0x1000) {
            if (func_06C5E8(D_0024F950) != 0) {
                func_06C4A8(D_0024F950, 1);
            }
            func_0C1C10(0xB, 0);
        }
    } else {
        o->b46 = 1;
    }
}
