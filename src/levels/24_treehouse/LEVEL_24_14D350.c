/* LEVEL_24:0x14D350 -- placement copy of LEVEL_04_1655D0.c: while the object is within 2.5 units of the player and the input state is right: releases the held state, registers the interaction and, when the button bit is set, triggers the shared prompt; otherwise raises the object's near flag. */
typedef struct {
    char pad00[0x30];
    float pos[3];
    char pad3C[0xA];
    unsigned char b46;
} Obj;

extern char D_00201040[];

extern int func_14D478(Obj *o);
extern void func_0189C8(float *out);
extern int func_0810E8(void);
extern void func_0AEC90(int a);
extern int func_127FB0(int a);
extern void func_0AED38(int a, int b, int c, int d);
extern int func_081228(int a);
extern int func_0641D0(char *p);
extern void func_064090(char *p, int a);
extern int func_0B5CC0(int a, int b);

static __inline__ void Sub3(float *d, float *a, float *b)
{
    d[0] = a[0] - b[0];
    d[1] = a[1] - b[1];
    d[2] = a[2] - b[2];
}

void func_14D350(Obj *o)
{
    float p[4];
    float d[4];

    if (func_14D478(o) != 0) {
        return;
    }
    func_0189C8(p);
    Sub3(d, p, o->pos);
    if (d[0] * d[0] + d[1] * d[1] + d[2] * d[2] <= 6.25f && func_0810E8() == 2) {
        if (o->b46 != 0) {
            func_0AEC90(0);
            o->b46 = 0;
        }
        func_0AED38(0, func_127FB0(1), 0, 0);
        if (func_081228(2) & 0x1000) {
            if (func_0641D0(D_00201040) != 0) {
                func_064090(D_00201040, 1);
            }
            func_0B5CC0(0xB, 0);
        }
    } else {
        o->b46 = 1;
    }
}
