/* LEVEL_24:0x154F30 -- placement copy of LEVEL_01_16B678.c: starts a request on a free (or reclaimable) slot of an owner and notifies the owner's listener. */

typedef struct Req Req;
typedef struct Obj Obj;

typedef int (*ReqFn)(float f, Req *req, int a, int b, void *p30, void *p20, Obj *self);

typedef struct Info {
    char pad_00[0x20];
    ReqFn fn;
} Info;

struct Req {
    char pad_00[0x40];
    Info *info;
};

typedef struct Thing {
    char pad_00[0x68];
    int kind;
} Thing;

typedef struct Param {
    int mode;
    float value;
    int a;
    int b;
} Param;

typedef struct List {
    int head;
    int slot[2];
    char pad_0C[0x14];
    int param;
} List;

struct Obj {
    char pad_00[0x20];
    int field_20;
    char pad_24[0xC];
    int field_30;
    char pad_34[0x24];
    List *list;
};

extern Param D_001E9AD8[];

extern int func_154EB8(Req *req);
extern Thing *func_154EF8(int slot);
extern void func_154E68(int slot);
extern int func_154C48(void *p, Req *req);
extern int func_014E20(int head, int a, Req *req, int result);

static __inline__ int DispatchReq(Req *req, int param, void *p30, void *p20, Obj *self)
{
    Info *info;
    Param *p;
    float f;

    info = req->info;
    if (info->fn == 0)
        return -1;
    p = &D_001E9AD8[param];
    switch (p->mode) {
    case 0:
    case 1:
        f = p->value;
        break;
    case 2:
        f = p->value * 0.5f;
        break;
    default:
        f = p->value;
        break;
    }
    return info->fn(f, req, p->a, p->b, p30, p20, self);
}

void func_154F30(Obj *self, Req *req)
{
    List *list;
    int found;
    int cand;
    int i;
    Thing *t;
    int result;

    if (req == 0)
        return;
    if (req->info->fn == 0)
        return;
    list = self->list;
    if (func_154EB8(req) != 0)
        return;
    found = -1;
    cand = -1;
    for (i = 0; i < 2; i++) {
        t = func_154EF8(list->slot[i]);
        if (t == 0) {
            found = i;
            break;
        }
        if (t->kind == 2)
            cand = i;
    }
    if (found < 0) {
        if (cand >= 0) {
            func_154E68(list->slot[cand]);
            found = cand;
        }
        if (found < 0)
            return;
    }
    list->slot[found] = func_154C48(&self->field_30, req);
    result = DispatchReq(req, list->param, &self->field_30, &self->field_20, self);
    func_014E20(self->list->head, 8, req, result);
}
