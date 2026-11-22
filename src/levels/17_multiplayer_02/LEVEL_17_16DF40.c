/* LEVEL_17:0x16DF40 -- when the object's record is ready and the object is idle, switches it to its start state, writes the record's blend value and restarts the object's effect with the level's fade speed. */
typedef struct {
    char pad00[0x2C];
    int w2C;
    int w30;
} Rec;

typedef struct {
    char pad00[0x1C];
    char seg[0x24];
    float f40;
    char pad44[0x0C];
    int w50;
    unsigned char b54;
    unsigned char b55;
} Fx;

typedef struct {
    char pad00[0x04];
    char *tbl;
} Anim;

typedef struct {
    char pad00[0x30];
    char pos[0x10];
    Anim *anim;
    unsigned char b44;
    unsigned char b45;
    char pad46[0x0E];
    Rec *rec;
    Fx *fx;
    char pad5C[0x08];
    int w64;
    char pad68[0x10];
    unsigned int w78;
} Obj;

extern int D_001C3920;
extern float D_001C2150[];
extern int func_02D160(Rec *r, Obj *o);
extern int func_0139E0(void *pos, float *out, int a, float f);
extern void func_012DD0(void *seg, Obj *o, int mode, int val);
extern void func_16E6C8(Obj *o);
extern void func_16E838(Obj *o, int a, int b);

int func_16DF40(Obj *o)
{
    Fx *fx;
    Rec *rec;
    float speed;

    fx = o->fx;
    rec = o->rec;
    fx->b54 = 0xFF;
    if (rec->w2C == 0) {
        return 0;
    }
    if (func_02D160(rec, o) != 1) {
        return 0;
    }
    if (rec->w30 == 0) {
        return 0;
    }
    if (func_0139E0(o->pos, 0, 1, 2.0f) == 0) {
        return 0;
    }
    if (o->b45 != 0) {
        return 0;
    }
    o->w78 = (o->w78 & 0xFFF0FFFF) | 0x20000;
    o->w64 |= 0x1000;
    *(float *)(o->anim->tbl + 0x28 + o->b44 * 0x34) = 0.30000001192092896f;
    func_012DD0(fx->seg, o, 1, 0x10);
    speed = D_001C2150[(D_001C3920 - 0x10) * 8];
    fx->b55 = 0;
    fx->w50 = 0;
    fx->f40 = speed;
    func_16E6C8(o);
    func_16E838(o, 0xFF, o->b45);
    return 1;
}
