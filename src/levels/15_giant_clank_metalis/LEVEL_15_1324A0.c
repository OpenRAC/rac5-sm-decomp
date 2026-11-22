/* LEVEL_15:0x1324A0 -- resets the global camera-rig state from a position record and the caller's basis record: copies the position twice, converts it to floats, rebuilds the basis copies, registers the rig with the frame callback table and clears the key slots. */
typedef struct L3 {
    long x;
    long y;
    long z;
} L3;

typedef struct V3 {
    float x;
    float y;
    float z;
} V3;

typedef struct Rec {
    V3 a;
    V3 b;
    V3 c;
    int n[3];
} Rec;

typedef struct G0 {
    L3 a;
    L3 b;
    V3 v;
    V3 v2;
    Rec rec;
    Rec rec2;
    V3 w;
    char padB4[0xD8 - 0xB4];
    V3 zv;
    char padE4[0xFC - 0xE4];
    char arg[4];
    char pad100[0x148 - 0x100];
    V3 recs[3];
} G0;

typedef struct Tail {
    V3 p;
    V3 q;
    char pad18[0xB8 - 0x18];
    char flag;
} Tail;

extern G0 D_002F3D20;
extern Tail D_002F3DD4;

extern float func_13FD48(long v);
extern void func_0E97A8(Rec *a0, Rec *a1);
extern void func_000BE0(int index, int first, int second);
extern void func_000EB8(void);
extern void func_131C40(V3 *a0);

static __inline__ void CopyL3(L3 *d, L3 *s)
{
    d->x = s->x;
    d->y = s->y;
    d->z = s->z;
}

static __inline__ void CopyV3(V3 *d, V3 *s)
{
    d->x = s->x;
    d->y = s->y;
    d->z = s->z;
}

static __inline__ void ToF3(V3 *d, L3 *s)
{
    d->x = func_13FD48(s->x);
    d->y = func_13FD48(s->y);
    d->z = func_13FD48(s->z);
}

static __inline__ void Set3(V3 *d, float v)
{
    d->x = v;
    d->y = v;
    d->z = v;
}

void func_1324A0(L3 *src, Rec *rec)
{
    V3 *p;

    CopyL3(&D_002F3D20.a, src);
    CopyL3(&D_002F3D20.b, src);
    ToF3(&D_002F3D20.v, &D_002F3D20.a);
    CopyV3(&D_002F3D20.v2, &D_002F3D20.v);
    Set3(&D_002F3D20.zv, 0.0f);
    func_0E97A8(&D_002F3D20.rec, rec);
    D_002F3D20.rec2 = D_002F3D20.rec;
    CopyV3(&D_002F3D20.w, (V3 *)D_002F3D20.rec2.n);
    func_000BE0(0, (int)func_000EB8, (int)D_002F3D20.arg);
    func_131C40(&D_002F3D20.v);
    p = D_002F3D20.recs;
    do {
        p->z = 0.0f;
        p->x = 0.0f;
        p->y = 0.0f;
        p++;
    } while ((int)p < (int)(D_002F3D20.recs + 3));
    Set3(&D_002F3DD4.p, 0.0f);
    Set3(&D_002F3DD4.q, 0.0f);
    D_002F3DD4.flag = 0;
}
