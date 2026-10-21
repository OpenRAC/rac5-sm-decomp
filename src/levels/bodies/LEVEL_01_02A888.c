/* LEVEL_01:0x02A888 -- fills the caller's record: two floats taken from the
   second argument, a third one returned by the erased routine, and eight
   words cleared. */
typedef struct {
    float f0;
    float f1;
    float f2;
    int i3;
    int i4;
    int i5;
    int i6;
    int i7;
    int i8;
    int i9;
    int i10;
} Rec;

typedef struct {
    float f[16];
} Src;

extern float func_000000(float x, float y);

void func_02A888(Rec *a0, Src *a1)
{
    a0->f0 = a1->f[12];
    a0->f1 = a1->f[14];
    a0->f2 = func_000000(a1->f[10], a1->f[8]);
    a0->i7 = 0;
    a0->i8 = 0;
    a0->i9 = 0;
    a0->i10 = 0;
    a0->i3 = 0;
    a0->i4 = 0;
    a0->i5 = 0;
    a0->i6 = 0;
}
