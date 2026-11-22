/* LEVEL_03:0x1ED7D0 -- placement copy of LEVEL_03_1D2E08.c: tries two candidate offset points on an object, flagging its table entry while testing each, and advances its stage counter when both pass. */
typedef struct { float x, y, z; } Vec3;
typedef struct { float m[16]; } Mat4;
typedef struct { char pad[8]; unsigned short flags; char pad0A[6]; } Ent16;
typedef struct { char pad[0x64]; Ent16 *ents; } Rec;
typedef struct {
    unsigned short id;
    unsigned char pad2;
    unsigned char list;
    char pad4[0x50];
    float at54[10];
    unsigned char stage;
} Data;
typedef struct { char pad[0x58]; Data *data; } Obj;

extern float D_00245AF8[];
extern Rec D_0024A578[];

extern float func_07C888(void *a0);
extern int func_07C8B0(void *obj, int a);
extern void func_124060(Vec3 *dst, Mat4 *mat, Vec3 *v);
extern int func_026C18(float *obj, float *p);
extern void func_1EEB18(void *obj, Vec3 *v, float *p);
extern void func_1EDA50(void *obj, int code);

static __inline__ void Set3(Vec3 *v, float x, float y, float z)
{
    v->x = x;
    v->y = y;
    v->z = z;
}

static __inline__ void SetBit(Data *d)
{
    if (d->id != 0xFFFF) {
        Ent16 *e = D_0024A578[d->list].ents + d->id;
        e->flags |= 8;
    }
}

static __inline__ void ClearBit(Data *d)
{
    if (d->id != 0xFFFF) {
        Ent16 *e = D_0024A578[d->list].ents + d->id;
        e->flags &= 0xFFF7;
    }
}

static __inline__ int Probe(Data *d, Vec3 *v, float *p)
{
    int r;

    SetBit(d);
    r = func_026C18(&v->x, p);
    ClearBit(d);
    return r;
}

void func_1ED7D0(Obj *obj)
{
    Data *d;
    float t;
    Vec3 a;
    Vec3 b;
    float *p;

    d = obj->data;
    t = func_07C888(obj);
    if (d->stage < 2 && D_00245AF8[d->stage] <= t) {
        p = d->at54;
        Set3(&a, -0.608f, 1.304f, 1.149f);
        func_124060(&a, (Mat4 *)obj, &a);
        if ((unsigned char)Probe(d, &a, p) != 0) {
            Set3(&b, 0.588f, 1.274f, 1.149f);
            func_124060(&b, (Mat4 *)obj, &b);
            if ((unsigned char)Probe(d, &b, p) != 0)
                goto ok;
        }
        func_1EDA50(obj, 0x13);
        return;
ok:
        func_1EEB18(obj, &b, p);
        func_1EEB18(obj, &a, p);
        d->stage++;
    }
    if (func_07C8B0(obj, 0) != 0)
        func_1EDA50(obj, 0x15);
}
