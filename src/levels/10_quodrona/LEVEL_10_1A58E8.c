/* LEVEL_10:0x1A58E8 -- switches an object's mode and performs per-mode setup. */
typedef struct {
    char b[0x84];
} Slot;
typedef struct {
    char pad0[4];
    Slot slot[10];
    char a52C[0x40];
    char a56C[0x18];
    float f584;
    unsigned char b588;
} St;
typedef struct {
    char pad0[0x30];
    char pos[0x15];
    unsigned char mode;
    char pad46[0x58 - 0x46];
    St *st;
    char pad5C[0x70 - 0x5C];
    float f70;
} Obj;
typedef struct {
    char pad0[0x14];
    float f14, f18, f1C, f20;
} Cam;
typedef struct {
    char pad0[0x38];
    Cam *cam;
} Glob;
extern Glob D_003A02C8;
extern void func_122030(void *a0, void *v, float f);
extern void func_108F08(void *p);
extern void func_0EF270(int n, void *p);
extern void func_081000(Obj *o, Cam *cam, void *handle, int loop, int c4, int b1,
                        unsigned char prio, int b0, float f0, float f1, float f2, float f3);
extern void func_1A5CF8(Obj *o);

void func_1A58E8(Obj *o, int m)
{
    St *s;
    int i;
    int n;
    Slot *p;
    unsigned char mm;
    char *pos;

    mm = m;
    s = o->st;
    switch (mm) {
    case 1:
        func_122030(s->a52C, s->a56C, s->f584);
        o->f70 = 60.0f;
        break;
    case 2:
        i = 0;
        pos = o->pos;
        p = s->slot;
        for (; i < 10; i = n) {
            func_108F08(p);
            n = i + 1;
            p++;
        }
        s->b588 = 0;
        o->f70 = 15.0f;
        func_0EF270(5, pos);
        if (D_003A02C8.cam != 0)
            func_081000(o, D_003A02C8.cam, 0, 0, 0, 0, 0, 1, D_003A02C8.cam->f14,
                        D_003A02C8.cam->f18, D_003A02C8.cam->f1C, D_003A02C8.cam->f20);
        func_1A5CF8(o);
        break;
    }
    o->mode = mm;
}
