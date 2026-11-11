/* LEVEL_15:0x136170 -- resets the game object: copies the default record, clears the state words and the vectors, then reruns the setup calls. */
typedef struct { float x, y, z; } Vec3;
typedef struct { int w[5]; } Rec20;
typedef struct { char pad[0x58]; Rec20 *rec; } Owner;
typedef struct { char pad[0x64]; unsigned int flags; } Sub;
typedef struct {
    char pad000[0x100];
    short h100;
    short h102;
    char pad104[0x598 - 0x104];
    int f598;
    Sub *sub;
    int f5A0;
    int f5A4;
    int pad5A8;
    int f5AC;
    int f5B0;
    int f5B4;
    char pad5B8[0x9A0 - 0x5B8];
    int f9A0;
    int f9A4;
    char pad9A8[0x9BC - 0x9A8];
    int f9BC;
    char pad9C0[0xDD4 - 0x9C0];
    Rec20 *fDD4;
} Big;

extern struct G {
    Owner *owner;
    Big *big;
    char pad08[0x2C - 8];
    float f2C;
    char c30;
    char pad31[0xFC - 0x31];
    Vec3 v[3];
    char pad120[0x134 - 0x120];
    float f134;
    float f138;
    char pad13C[0x158 - 0x13C];
    float f158;
    char pad15C[0x394 - 0x15C];
    float f394;
} D_002F4F88;

extern Rec20 D_00171C68;
extern Vec3 D_00171B30;
extern Vec3 D_00171B40;

extern void func_02F798(void *value);
extern void func_02F7F0(void *value);
extern void func_02F848(void *value);
extern void func_134BA0(void);
extern void func_1345F8(float f, int n);
extern void func_136130(void);
extern void func_135DE8(Vec3 *v);
extern void func_0F7468(Vec3 *src);
extern void func_134D58(void);
extern void func_135A58(void);
extern void func_135CC0(void);

static __inline__ void Zero3_0(Vec3 *v)
{
    v->x = 0.0f;
    v->y = 0.0f;
    v->z = 0.0f;
}

static __inline__ void Zero3_1(Vec3 *v)
{
    v->z = 0.0f;
    v->x = 0.0f;
    v->y = 0.0f;
}

static __inline__ void Zero3_2(Vec3 *v)
{
    v->z = 0.0f;
    v->x = 0.0f;
    v->y = 0.0f;
}

static __inline__ void Mid3(Vec3 *o, Vec3 *a, Vec3 *b)
{
    o->x = (a->x + b->x) * 0.5f;
    o->y = (a->y + b->y) * 0.5f;
    o->z = (a->z + b->z) * 0.5f;
}

void func_136170(void)
{
    Rec20 *rec;
    Big *big;
    Vec3 mid;

    rec = D_002F4F88.owner->rec;
    big = D_002F4F88.big;
    *rec = D_00171C68;
    if (big->sub != 0) {
        func_02F798(0);
        func_02F7F0(0);
        func_02F848(0);
        big->sub->flags |= 0x20;
    }
    big->fDD4 = rec;
    big->f9BC = 0;
    big->sub = 0;
    big->f598 = 0;
    big->f5A0 = 0;
    big->f5A4 = 0;
    big->f5AC = 0;
    big->f5B0 = 0;
    big->f5B4 = 0;
    big->f9A0 = 0;
    big->f9A4 = 0;
    big->h102 = 0x39;
    big->h100 = 0x39;
    func_134BA0();
    func_1345F8(0.0f, 2);
    func_136130();
    Mid3(&mid, &D_00171B30, &D_00171B40);
    func_135DE8(&mid);
    func_0F7468(&mid);
    Zero3_0(&D_002F4F88.v[0]);
    Zero3_1(&D_002F4F88.v[1]);
    Zero3_2(&D_002F4F88.v[2]);
    D_002F4F88.f2C = 100.0f;
    D_002F4F88.f134 = 1.0f;
    D_002F4F88.f138 = 0.0f;
    D_002F4F88.f158 = 0.0f;
    D_002F4F88.c30 = 0;
    func_134D58();
    func_135A58();
    func_135CC0();
    D_002F4F88.f394 = 0.0f;
}
