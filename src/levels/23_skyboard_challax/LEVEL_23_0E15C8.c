/* LEVEL_23.REL:0E15C8 -- corps repris d une vague precedente, seuls les appels changent. */
typedef struct {
    char pad_00[0x14];
    int f_14;
    float f_18;
    int f_1C;
} Obj;

typedef struct {
    float f_00;
} Rec;

extern void func_08CE30(void *a0, int a1, int a2);

void func_0E15C8(Obj *a0, int a1, Rec *a2)
{
    func_08CE30(a0, a1, 1);
    a0->f_14 = (int)a2;
    a0->f_18 = 1.0f / a2->f_00;
    a0->f_1C = 0;
}
