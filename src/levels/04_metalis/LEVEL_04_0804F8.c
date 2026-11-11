extern void func_080468(void *, float *, int);
extern void func_132058(float *, void *, float *);

void func_0804F8(void *obj, float *vec, int id)
{
    func_080468(obj, vec, id);
    func_132058(vec, obj, vec);
}
