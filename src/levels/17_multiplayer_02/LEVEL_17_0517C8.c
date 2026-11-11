/* LEVEL_17:0x0517C8 -- placement copy of LEVEL_16_051D98.c: reads the stick tilt and button mask into a three-way direction, then starts the matching transition. */
struct Obj {
    char pad000[0x108];
    unsigned short f_108;
    char pad10A[0x262];
    int f_36C;
    char pad370[0x934];
    int f_CA4;
    char padCA8[0x1C];
    int f_CC4;
    char padCC8[0x1C];
    int f_CE4;
};

typedef struct Rec Rec;

extern unsigned char D_001DCAE0;
extern struct {
    char pad0[0x24];
    int f_24;
} *D_001950B4;
extern int D_001B6C00[];

extern void func_037618(struct Obj *o);
extern char *func_079E68(int mask);
extern unsigned int func_079F40(int mask);
extern float func_07A1E8(Rec *a0);
extern unsigned int func_07A2A8(int value);
extern unsigned int func_07A2E0(int value);
extern void func_048C50(float a, float b, struct Obj *o, int c, int d, int e);

void func_0517C8(struct Obj *o)
{
    unsigned int mask;
    float tilt;
    char *pad;
    int bits;
    int want;

    if (o->f_CA4 != 0) {
        if (D_001DCAE0 != 0) {
            mask = 0;
            tilt = 0.0f;
            bits = 0;
        } else {
            func_037618(o);
            pad = func_079E68(0x1000);
            mask = func_079F40(0x1000);
            bits = *(int *)(pad + 4);
            tilt = func_07A1E8((Rec *)pad);
        }
        if (tilt < -0.5f || func_07A2A8(bits) != 0) {
            o->f_CE4 = 1;
        } else if (0.5f < tilt || func_07A2E0(bits) != 0) {
            o->f_CE4 = 2;
        } else {
            o->f_CE4 = 0;
        }
        if (D_001950B4->f_24 == 2 ? (mask & 0x4100) : (mask & 0x4000)) {
            if (o->f_108 == 1 || o->f_108 == 6) {
                if (o->f_CE4 == 0) {
                    o->f_CC4 = 3;
                } else {
                    o->f_CC4 = 10;
                }
            }
        }
        if (o->f_108 == 1) {
            want = 1;
            if (o->f_36C != 0x43) {
                want = 2;
                if (o->f_36C != 0x44) {
                    want = 0;
                }
            }
            if (o->f_CE4 != want) {
                func_048C50(0.25f, 0.0f, o, D_001B6C00[o->f_CE4], 0, 1);
            }
        }
    }
}
