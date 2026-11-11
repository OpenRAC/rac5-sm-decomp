/* LEVEL_07:0x0EDF58 -- calls the level's routine, stores the second
   argument and the reciprocal of its first float. */
typedef struct {
    char pad_00[0x14];
    float *f_14;
    float f_18;
} Rec;

extern void func_099458(void *a0, void *a1, int a2);

void func_0EDF58(Rec *a0, void *a1, float *a2)
{
    func_099458(a0, a1, 1);
    a0->f_14 = a2;
    a0->f_18 = 1.0f / a2[0];
}
