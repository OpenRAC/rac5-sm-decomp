extern void func_07D008(void *, float *, int);
extern void func_125E78(float *, void *, float *);

void func_07D098(void *obj, float *vec, int id)
{
    func_07D008(obj, vec, id);
    func_125E78(vec, obj, vec);
}
