extern void func_084F78(void *, float *, int);
extern void func_137108(float *, void *, float *);

void func_085008(void *obj, float *vec, int id)
{
    func_084F78(obj, vec, id);
    func_137108(vec, obj, vec);
}
