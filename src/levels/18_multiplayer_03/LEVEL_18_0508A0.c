/* LEVEL_18:0x0508A0 -- placement copy of LEVEL_16_051D98.c: reads the stick tilt and button mask into a three-way direction, then starts the matching transition. */
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

extern unsigned char D_001EBB60;
extern struct {
    char pad0[0x24];
    int f_24;
} *D_001A2F34;
extern int D_001C4D00[];

extern void func_036608(struct Obj *o);
extern char *func_078D70(int mask);
extern unsigned int func_078E48(int mask);
extern float func_0790F0(Rec *a0);
extern unsigned int func_0791B0(int value);
extern unsigned int func_0791E8(int value);
extern void func_047C30(float a, float b, struct Obj *o, int c, int d, int e);

void func_0508A0(struct Obj *o)
{
    unsigned int mask;
    float tilt;
    char *pad;
    int bits;
    int want;

    if (o->f_CA4 != 0) {
        if (D_001EBB60 != 0) {
            mask = 0;
            tilt = 0.0f;
            bits = 0;
        } else {
            func_036608(o);
            pad = func_078D70(0x1000);
            mask = func_078E48(0x1000);
            bits = *(int *)(pad + 4);
            tilt = func_0790F0((Rec *)pad);
        }
        if (tilt < -0.5f || func_0791B0(bits) != 0) {
            o->f_CE4 = 1;
        } else if (0.5f < tilt || func_0791E8(bits) != 0) {
            o->f_CE4 = 2;
        } else {
            o->f_CE4 = 0;
        }
        if (D_001A2F34->f_24 == 2 ? (mask & 0x4100) : (mask & 0x4000)) {
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
                func_047C30(0.25f, 0.0f, o, D_001C4D00[o->f_CE4], 0, 1);
            }
        }
    }
}
