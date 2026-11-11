/* LEVEL_15:0x105798 -- spawns eight scaled effects from a table and resets the object state. */
typedef struct { float x, y, z; } V3;
typedef struct { float f[12]; } M;
typedef struct {
    char pad0[9];
    char flag;
    char pad0A[0x3C - 0x0A];
    V3 pos;
    char pad48[0x6C - 0x48];
    V3 rot;
    char pad78[0x260 - 0x78];
    float scale;
    int state;
} O;
typedef struct { char pad0[0x24]; V3 pos; } R;
typedef struct { char pad0[0x118]; } S;
extern V3 D_0016FC58;
extern int D_0016FC70[9];
extern S D_002EDA44[9];
extern float D_0016FD38[];
extern void func_0EC3A0(float *out, float *a, float *b);
extern void func_0ECAB0(int a, M *m, float x, float y, float z);
extern R *func_11D5D0(S *s, M *m, float scale, int n);
extern void func_0E6A68(V3 *v, float a, float b);
extern void func_114BB0(unsigned int index, float *pos);
extern void func_080C30(int a, float x, float y, float z);
struct Blob12 {
    unsigned char b[8];
    int w;
};
extern void func_12B788(float *a0, struct Blob12 *src);

void func_105798(O *o)
{
    M m;
    V3 t;
    V3 d;
    V3 p;
    R *r;
    V3 *q;
    unsigned i;
    float s;
    float s2;

    s = o->scale;
    func_0EC3A0(m.f, &o->rot.x, &o->pos.x);
    t.x = s * D_0016FC58.x;
    t.y = s * D_0016FC58.y;
    t.z = s * D_0016FC58.z;
    func_0ECAB0(0, &m, t.x, t.y, t.z);
    s2 = s * 4.0f * 4.0f;
    for (i = 0; i < 9; i++) {
        r = func_11D5D0(&D_002EDA44[i], &m, s, D_0016FC70[i]);
        if (r) {
            func_0E6A68(&d, 0.0f, s2);
            q = &r->pos;
            p.x = r->pos.x + d.x;
            p.y = q->y + d.y;
            p.z = q->z + d.z;
            func_114BB0(1, &p.x);
        }
    }
    func_080C30(0, 8.0f, 10.0f, 1.2f);
    func_12B788(D_0016FD38, (struct Blob12 *)&m.f[9]);
    o->state = 0;
    o->flag = 1;
}
