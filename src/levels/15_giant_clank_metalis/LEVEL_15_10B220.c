/* LEVEL_15.REL:0x10B220 -- takes three floats from a helper into a local
   vector, shifts two of them by the object spacing, asks for a third, then
   hands the vector to another helper. */
typedef struct {
    char pad[0x50];
    float f50;
    float f54;
    float f58;
} R;

extern int D_002F3D68;

extern void func_0EB910(float *out, int *g, void *p, int zero);
extern float func_1372E0(void);
extern void func_0EABF0(void *a0, int *g, float *v);

void func_10B220(void *a0, void *a1, R *a2)
{
    float v[3];

    func_0EB910(v, &D_002F3D68, a1, 0);
    v[0] = v[0] * a2->f50 + a2->f54;
    v[1] = v[1] * a2->f50 + a2->f58;
    v[2] = func_1372E0();
    func_0EABF0(a0, &D_002F3D68, v);
}
