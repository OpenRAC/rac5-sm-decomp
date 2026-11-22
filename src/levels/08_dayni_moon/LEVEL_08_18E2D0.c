/* LEVEL_08:0x18E2D0 -- state handler: starts the shared effect, then counts the record's timer down by the step (scaled for one kind of owner); while it is positive it updates the record and stays in state 2, when it runs out it clears the timer, runs the finishing helpers and moves to state 3. Returns 1 for event 4. */
typedef struct {
    char pad00[0x14];
    float f14;
    float f18;
    float f1C;
    float f20;
} Fx;

typedef struct {
    char pad00[0x3F];
    unsigned char b3F;
} Model;

typedef struct {
    char pad00[0x40];
    Model *model;
} Owner;

typedef struct {
    char pad00[0x18];
    char sub[0x28];
    float f40;
} Rec;

typedef struct {
    char pad00[0x30];
    float pos[3];
    char pad3C[0x1C];
    Rec *rec;
} Obj;

extern Fx *D_00250BF4;
extern float D_002576A8;
extern void func_088940(Obj *o, Fx *fx, float a, float b, float c, float d, int e, int f, int g, int h, int i, int j);
extern void func_21FCB0(char *sub, Obj *o, Owner *owner);
extern void func_0FB378(int a, float *pos);
extern void func_0845F8(Obj *o, int a);

int func_18E2D0(Obj *o, int ev, int a2, int a3, int a4, Owner *owner, float dt)
{
    Fx *fx;
    Rec *r;
    float v;
    float base;

    if (ev == 4) {
        return 1;
    }
    fx = D_00250BF4;
    r = o->rec;
    if (fx != 0) {
        func_088940(o, fx, fx->f14, fx->f18, fx->f1C, fx->f20, 0, 0, 0, 0, 0, 1);
    }
    base = r->f40;
    if (owner->model->b3F == 1) {
        v = base - dt * D_002576A8;
    } else {
        v = base - dt;
    }
    r->f40 = v;
    if (v <= 0.0f) {
        r->f40 = 0.0f;
        func_0FB378(0, o->pos);
        func_0845F8(o, 1);
        return 3;
    }
    func_21FCB0(r->sub, o, owner);
    return 2;
}
