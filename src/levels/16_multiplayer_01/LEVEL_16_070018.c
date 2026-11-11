extern void func_06FF88(void *, float *, int);
extern void func_1044F0(float *, void *, float *);

void func_070018(void *obj, float *vec, int id)
{
    func_06FF88(obj, vec, id);
    func_1044F0(vec, obj, vec);
}
