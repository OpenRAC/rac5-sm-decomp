/* LEVEL_01:0x1C3210 -- steers an object toward its target, counts a frame, then picks the next state from a probe result. */
typedef struct {
    char pad0[8];
    float f08;
    float f0C;
} Cfg;

typedef struct {
    char pad0[0xC];
    float f0C;
    char pad10[0x24];
    float f34;
    char pad38[0x48];
    unsigned short h80;
    char pad82[0xA];
    unsigned char b8C;
} Rec;

typedef struct {
    char pad0[0x45];
    unsigned char b45;
    char pad46[0xE];
    Cfg *cfg;
    Rec *rec;
} Obj;

extern float D_00229560[];
extern char D_00229570[];
extern void func_013878(Obj *o, float *a, float *b, float *c, float *d);
extern void func_0DC828(void *obj, void *r, void *c);
extern int func_07CAB8(Obj *o, int a);
extern int func_1C3630(Obj *o);
extern void func_1C1E90(Obj *o, int a, int b);

void func_1C3210(Obj *o)
{
    Cfg *cfg;
    Rec *rec;
    int r;

    cfg = o->cfg;
    rec = o->rec;
    func_013878(o, &cfg->f08, &cfg->f0C, &rec->f34, D_00229560);
    rec->h80 = rec->h80 + 1;
    if (rec->f0C != -1.0f && rec->h80 == 2) {
        func_0DC828(rec, D_00229570, 0);
    }
    if (func_07CAB8(o, 0) != 0) {
        r = func_1C3630(o);
        if (r == 0 && rec->b8C != 0) {
            func_1C1E90(o, o->b45, 11);
        } else {
            func_1C1E90(o, o->b45, (unsigned char)r);
        }
    }
}
