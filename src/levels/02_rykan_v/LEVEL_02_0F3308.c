typedef struct {
    char pad_00[0x14];
    void *f_14;
    float f_18;
} Rec;

typedef struct {
    float f_00;
} Src;

extern void func_09DB78(void *a, void *b, int c);

void func_0F3308(Rec *a0, void *a1, Src *a2)
{
    func_09DB78(a0, a1, 1);
    a0->f_14 = a2;
    a0->f_18 = 1.0f / a2->f_00;
}
