extern void func_07A6A8(void *, float *, int);
extern void func_121920(float *, void *, float *);

void func_07A738(void *obj, float *vec, int id)
{
    func_07A6A8(obj, vec, id);
    func_121920(vec, obj, vec);
}
