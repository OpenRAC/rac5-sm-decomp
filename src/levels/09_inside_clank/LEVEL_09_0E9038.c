/* LEVEL_09:0x0E9038 -- calls the helper, stores the pointer in the record
   and writes the inverse of the float it points at. */
typedef struct {
    char pad_00[0x14];
    float *p;
    float f_18;
} Obj;

extern void func_093D28(void *a0, void *a1, int a2);

void func_0E9038(Obj *a0, void *a1, float *a2)
{
    func_093D28(a0, a1, 1);
    a0->p = a2;
    a0->f_18 = 1.0f / a2[0];
}
