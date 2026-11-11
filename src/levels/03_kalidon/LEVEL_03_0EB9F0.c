/* LEVEL_03:0x0EB9F0 -- calls func_097200 then stores the reciprocal of
   the first field of the third argument. */
typedef struct {
    float f_00;
} Src;

typedef struct {
    char pad_00[0x14];
    Src *p_14;
    float f_18;
} Rec;

extern void func_097200(Rec *a0, int a1, int a2);

void func_0EB9F0(Rec *a0, int a1, Src *a2)
{
    Rec *s = a0;
    Src *t = a2;

    func_097200(s, a1, 1);
    s->p_14 = t;
    s->f_18 = 1.0f / t->f_00;
}
