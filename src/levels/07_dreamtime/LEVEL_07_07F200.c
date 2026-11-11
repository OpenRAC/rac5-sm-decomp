extern void func_07F170(void *, float *, int);
extern void func_128E80(float *, void *, float *);

void func_07F200(void *obj, float *vec, int id)
{
    func_07F170(obj, vec, id);
    func_128E80(vec, obj, vec);
}
