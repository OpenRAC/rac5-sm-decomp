extern void func_07D638(void *, float *, int);
extern void func_123D68(float *, void *, float *);

void func_07D6C8(void *obj, float *vec, int id)
{
    func_07D638(obj, vec, id);
    func_123D68(vec, obj, vec);
}
