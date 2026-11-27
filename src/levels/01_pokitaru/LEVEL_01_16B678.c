/* LEVEL_01:0x16B678 -- starts a request on a free (or reclaimable) slot of an owner and notifies the owner's listener. */

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

extern Param D_00218D58[];

extern int func_16B600(Req *req);
extern Thing *func_16B640(int slot);
extern void func_16B5B0(int slot);
extern int func_16B390(void *p, Req *req);
extern int func_015D88(int head, int a, Req *req, int result);

static __inline__ int DispatchReq(Req *req, int param, void *p30, void *p20, Obj *self)
{
    Info *info;
    Param *p;
    float f;

    info = req->info;
    if (info->fn == 0)
        return -1;
    p = &D_00218D58[param];
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

void func_16B678(Obj *self, Req *req)
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
    if (func_16B600(req) != 0)
        return;
    found = -1;
    cand = -1;
    for (i = 0; i < 2; i++) {
        t = func_16B640(list->slot[i]);
        if (t == 0) {
            found = i;
            break;
        }
        if (t->kind == 2)
            cand = i;
    }
    if (found < 0) {
        if (cand >= 0) {
            func_16B5B0(list->slot[cand]);
            found = cand;
        }
        if (found < 0)
            return;
    }
    list->slot[found] = func_16B390(&self->field_30, req);
    result = DispatchReq(req, list->param, &self->field_30, &self->field_20, self);
    func_015D88(self->list->head, 8, req, result);
}
