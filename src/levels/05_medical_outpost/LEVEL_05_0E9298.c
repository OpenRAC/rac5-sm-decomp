/* LEVEL_05.REL:0E9298 -- starts the caller's object, keeps the second record
   and stores the reciprocal of its first float. */
typedef struct {
    char pad0[0x14];
    void *p_14;
    float f_18;
} Obj;

typedef struct {
    float f_00;
} Sub;

extern void func_094B08(void *a0, void *a1, int a2);

void func_0E9298(Obj *a0, void *a1, Sub *a2)
{
    func_094B08(a0, a1, 1);
    a0->p_14 = a2;
    a0->f_18 = 1.0f / a2->f_00;
}
