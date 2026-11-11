/* LEVEL_02:0x07E840 -- a node filled in from the object tree. */
typedef struct {
    float x;
    float y;
    int i;
} Vec3;

typedef struct {
    char pad[0x0C];
    float a;
    float b;
} Param;

typedef struct {
    char pad[0x14];
    Param *param;
    char pad2[0x0C];
    Vec3 v;
} Holder;

typedef struct {
    char pad[0x14];
    Holder *holder;
} Root;

typedef struct {
    Vec3 v;
    float f0C;
    float f10;
    float f14;
    char f18;
} Res;

typedef struct {
    int flag;
} Local;

extern Res *func_09DD60(Local *l, Root *self, int n);

void func(Root *self)
{
    Local local;
    Res *r;
    Holder *holder;
    Param *param;

    holder = self->holder;
    param = holder->param;
    local.flag = -1;
    r = func_09DD60(&local, self, 1);
    if (r != 0) {
        r->f14 = 0.1f;
        r->f0C = 1.0f;
        r->f10 = (param->a * 0.0333333333f) / param->b;
        r->f18 = 1;
        r->v = holder->v;
    }
}
