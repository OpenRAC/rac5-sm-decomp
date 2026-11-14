/* LEVEL_08:0x1EF920 -- placement copy of LEVEL_04_1C67A0.c: runs the shared update, then spawns the effect at the object's position pulled back along its velocity and raised by 0.3. */
typedef struct Obj { char pad00[0x20]; float v20[3]; float pad2C; float v30[3]; } Obj;
extern void func_1EF9C0(Obj *o);
extern void func_094C30(void *, int, float);
static __inline__ void Madd3(float *out, float *a, float *b, float k)
{
    out[0] = a[0] + b[0] * k;
    out[1] = a[1] + b[1] * k;
    out[2] = a[2] + b[2] * k;
}
void func_1EF920(Obj *o)
{
    float p[3];
    func_1EF9C0(o);
    Madd3(p, o->v30, o->v20, -0.9f);
    p[1] = p[1] + 0.3f;
    func_094C30(p, 0xFFE1D900, 1.0f);
}
