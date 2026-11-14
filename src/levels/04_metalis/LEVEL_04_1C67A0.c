/* LEVEL_04:0x1C67A0 -- runs the shared update, then spawns the effect at the object's position pulled back along its velocity and raised by 0.3. */
typedef struct Obj { char pad00[0x20]; float v20[3]; float pad2C; float v30[3]; } Obj;
extern void func_1C6840(Obj *o);
extern void func_08FE08(void *, int, float);
static __inline__ void Madd3(float *out, float *a, float *b, float k)
{
    out[0] = a[0] + b[0] * k;
    out[1] = a[1] + b[1] * k;
    out[2] = a[2] + b[2] * k;
}
void func_1C67A0(Obj *o)
{
    float p[3];
    func_1C6840(o);
    Madd3(p, o->v30, o->v20, -0.9f);
    p[1] = p[1] + 0.3f;
    func_08FE08(p, 0xFFE1D900, 1.0f);
}
