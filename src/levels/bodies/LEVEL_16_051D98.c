/* LEVEL_16:0x051D98 -- reads the stick tilt and button mask into a three-way direction, then starts the matching transition. */
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

extern unsigned char D_001EB7E0;
extern struct {
    char pad0[0x24];
    int f_24;
} *D_001A1AB4;
extern int D_001C3780[];

extern void func_037D78(struct Obj *o);
extern char *func_0793F0(int mask);
extern unsigned int func_0794C8(int mask);
extern float func_079770(Rec *a0);
extern unsigned int func_079830(int value);
extern unsigned int func_079868(int value);
extern void func_0493F0(float a, float b, struct Obj *o, int c, int d, int e);

void func_051D98(struct Obj *o)
{
    unsigned int mask;
    float tilt;
    char *pad;
    int bits;
    int want;

    if (o->f_CA4 != 0) {
        if (D_001EB7E0 != 0) {
            mask = 0;
            tilt = 0.0f;
            bits = 0;
        } else {
            func_037D78(o);
            pad = func_0793F0(0x1000);
            mask = func_0794C8(0x1000);
            bits = *(int *)(pad + 4);
            tilt = func_079770((Rec *)pad);
        }
        if (tilt < -0.5f || func_079830(bits) != 0) {
            o->f_CE4 = 1;
        } else if (0.5f < tilt || func_079868(bits) != 0) {
            o->f_CE4 = 2;
        } else {
            o->f_CE4 = 0;
        }
        if (D_001A1AB4->f_24 == 2 ? (mask & 0x4100) : (mask & 0x4000)) {
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
                func_0493F0(0.25f, 0.0f, o, D_001C3780[o->f_CE4], 0, 1);
            }
        }
    }
}
