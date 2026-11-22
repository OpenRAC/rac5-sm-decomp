/* LEVEL_05:0x18A028 -- builds a spawn descriptor (position pulled back along the object's velocity, fixed parameters, the given scale and a table address) and passes it to the spawner. */
typedef struct { float f00, f04, f08, f0C, f10, f14, f18, f1C; void *f20; } S;
typedef struct Obj { char pad00[0x20]; float v20[3]; float pad2C; float v30[3]; } Obj;
extern void *D_001F7808;
extern char D_00211368[];
extern void func_0FCC98(void *a, S *s, int n, float f, float g);
static __inline__ void Madd3(float *out, float *a, float *b, float k)
{
    out[0] = a[0] + b[0] * k;
    out[1] = a[1] + b[1] * k;
    out[2] = a[2] + b[2] * k;
}
void func_18A028(Obj *o, float arg)
{
    S s;
    Madd3(&s.f00, o->v30, o->v20, -0.25f);
    s.f0C = 0.01f;
    s.f10 = 0.1f;
    s.f14 = 0.0f;
    s.f18 = 1.0f;
    s.f1C = arg;
    s.f20 = D_00211368;
    func_0FCC98(D_001F7808, &s, 2, 0.0f, 0.0f);
}
