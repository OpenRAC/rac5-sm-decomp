/* LEVEL_17:0x0261E8 -- placement copy of LEVEL_01_028E10.c: rebuilds and orthonormalizes an object's basis matrix. */
typedef struct { float x, y, z, w; } Vec4;
typedef struct { Vec4 r[4]; } Mat4;
typedef struct {
    int ptr;
    char pad4[0x60 - 4];
    char at60[0xC];
    char at6C[0x20];
    Mat4 mat;
    char pad_cc[0x120 - 0xCC];
    unsigned char on;
    char pad121[0x164 - 0x121];
    unsigned char ready;
} Obj;
extern float sqrtf(float);
extern Mat4 *func_07DCE8(int, int);
extern void func_103E88(void *, float, float, float);
extern void func_103388(void *, Mat4 *, int);
extern void func_103EA0(void *, Mat4 *);

static inline void Norm(Vec4 *v)
{
    float n2 = v->x * v->x + v->y * v->y + v->z * v->z;
    float inv;
    if (!(n2 < 2.384185791015625e-07f)) {
        inv = 1.0f / sqrtf(n2);
        v->x = v->x * inv;
        v->y = v->y * inv;
        v->z = v->z * inv;
    }
}

void func_0261E8(Obj *o, int arg, float s, float dy)
{
    Mat4 m;

    if (o->on == 0)
        return;
    if (o->ready == 0)
        return;
    m = *func_07DCE8(o->ptr, 1);
    m.r[3].x = m.r[3].x * s;
    m.r[3].y = m.r[3].y * s;
    m.r[3].z = m.r[3].z * s;
    func_103E88(o->at6C, m.r[3].x, m.r[3].y, m.r[3].z);
    func_103388(&o->mat, &m, arg);
    o->mat.r[3].y = o->mat.r[3].y + dy;
    func_103E88(o->at60, o->mat.r[3].x, o->mat.r[3].y, o->mat.r[3].z);
    m = o->mat;
    Norm(&m.r[0]);
    Norm(&m.r[1]);
    Norm(&m.r[2]);
    func_103EA0((char *)o + 0xCC, &m);
}
