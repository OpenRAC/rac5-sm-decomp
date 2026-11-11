/* LEVEL_16:0x14FB98 -- packs six floats and a constant into a local record
   and hands it to func_0D9EB8. */
typedef struct {
    float f_00;
    float f_04;
    float f_08;
} Vec;

typedef struct {
    float f_00;
    float f_04;
    float f_08;
    float f_0C;
    float f_10;
    float f_14;
    float f_18;
    int f_1C;
} Args;

extern void func_0D9EB8(void *a, Args *b, int c);

void func_14FB98(void *a0, Vec *a1, Vec *a2)
{
    Args t;
    t.f_00 = a1->f_00;
    t.f_04 = a1->f_04;
    t.f_08 = a1->f_08;
    t.f_0C = a2->f_00;
    t.f_10 = a2->f_04;
    t.f_14 = a2->f_08;
    t.f_18 = 0.5f;
    t.f_1C = 0;
    func_0D9EB8(a0, &t, 0);
}
