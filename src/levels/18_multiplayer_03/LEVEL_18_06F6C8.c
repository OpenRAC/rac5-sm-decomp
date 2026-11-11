extern void func_06F638(void *, float *, int);
extern void func_102DB8(float *, void *, float *);

void func_06F6C8(void *obj, float *vec, int id)
{
    func_06F638(obj, vec, id);
    func_102DB8(vec, obj, vec);
}
