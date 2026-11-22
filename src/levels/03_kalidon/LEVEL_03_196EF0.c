/* LEVEL_03:0x196EF0 -- cutscene camera sequencer: state zero and one set up the shot, state two runs it (and on completion plays the finishing move, notifies the owner and returns), and every other path applies the three camera blend values for the selected camera. */
typedef struct Obj {
    char pad_00[0x30];
    float pos[3];
    char pad_3C[9];
    unsigned char state;
    char pad_46[0x2A];
    float t;
} Obj;

typedef struct Tgt {
    char pad_00[0x30];
    float pos[3];
} Tgt;

extern int func_087E78(int a);
extern Tgt *func_01A0F0(void);
extern void func_003198(float *p, int a, float f);
extern void func_03A098(int a);
extern void func_0039A8(int a, float f, int b);
extern void func_0039D0(int a, int b, float f);
extern void func_07C468(Obj *o, int a);
extern void func_003720(float f0, float f1, int a, int cam);
extern void func_003750(float f0, int a, float f1, int cam);
extern void func_003780(float f0, float f1, int a, int cam);

void func_196EF0(Obj *o, float dt)
{
    Tgt *t;
    float p[3];
    float *tp;
    int cam;
    unsigned char st;

    st = o->state;
    cam = 1;
    if (st == 0) {
        cam = 3;
        o->state = 1;
    } else if (st == cam) {
        o->t = 0.0f;
        o->state = 2;
    } else if (st == 2) {
        o->t += dt;
        if (func_087E78(2) != 0) {
            t = func_01A0F0();
            tp = t->pos;
            p[0] = tp[0];
            p[1] = tp[1];
            p[2] = tp[2];
            p[1] += 1.0f;
            func_003198(p, 0, 0.008333167061209679f);
            func_03A098(1);
            func_003198(tp, 0, 0.01666666753590107f);
            func_0039A8(0x3E8, 1.2000000476837158f, 0);
            func_0039D0(0x3E8, 0, 1.2000000476837158f);
            func_07C468(o, 1);
            return;
        }
        func_003198(o->pos, 1, 0.0f);
        func_03A098(1);
    }
    func_003720(9.380000114440918f, 1.0f, 0, cam);
    func_003750(-0.27000001072883606f, 0, 1.0f, cam);
    func_003780(0.8799999952316284f, 1.0f, 0, cam);
}
