/* LEVEL_10:0x057C90 -- placement copy of LEVEL_01_0593D8.c: reads the stick tilt and button mask into a three-way direction, then starts the matching transition (a fire press sets the final state). */
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

extern unsigned char D_00242330;
extern struct {
    char pad0[0x24];
    int f_24;
} *D_001FCFAC;
extern int D_00217840[];

extern void func_03A4E8(struct Obj *o);
extern char *func_088218(int mask);
extern unsigned int func_0882F0(int mask);
extern float func_088500(Rec *a0);
extern unsigned int func_0885C0(int value);
extern unsigned int func_0885F8(int value);
extern void func_04C118(struct Obj *o, int a, int b, int c, float d, float e);

void func_057C90(struct Obj *o)
{
    unsigned int mask;
    float tilt;
    char *pad;
    int bits;
    int want;

    if (o->f_CA4 != 0) {
        if (D_00242330 != 0) {
            mask = 0;
            tilt = 0.0f;
            bits = 0;
        } else {
            func_03A4E8(o);
            pad = func_088218(0x1000);
            mask = func_0882F0(0x1000);
            bits = *(int *)(pad + 4);
            tilt = func_088500((Rec *)pad);
        }
        if (tilt < -0.5f || func_0885C0(bits) != 0) {
            o->f_CE4 = 1;
        } else if (0.5f < tilt || func_0885F8(bits) != 0) {
            o->f_CE4 = 2;
        } else {
            o->f_CE4 = 0;
        }
        if (D_001FCFAC->f_24 == 2 ? (mask & 0x4100) : (mask & 0x4000)) {
            if (o->f_108 == 1 || o->f_108 == 6) {
                if (o->f_CE4 == 0) {
                    o->f_CC4 = 3;
                } else {
                    o->f_CC4 = 10;
                }
            }
        }
        if (o->f_108 == 1) {
            if (mask & 0x8000) {
                o->f_CC4 = 6;
            } else {
                want = 1;
                if (o->f_36C != 0x43) {
                    want = 2;
                    if (o->f_36C != 0x44) {
                        want = 0;
                    }
                }
                if (o->f_CE4 != want) {
                    func_04C118(o, D_00217840[o->f_CE4], 0, 1, 0.25f, 0.0f);
                }
            }
        }
    }
}
