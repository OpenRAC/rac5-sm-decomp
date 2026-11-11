typedef struct {
    char pad_00[0x14];
    int f_14;
    float f_18;
    int f_1C;
} Obj;

typedef struct {
    float f_00;
} Rec;

extern void func_097200(void *a0, int a1, int a2);

void func_0ECF78(Obj *a0, int a1, Rec *a2)
{
    func_097200(a0, a1, 1);
    a0->f_14 = (int)a2;
    a0->f_18 = 1.0f / a2->f_00;
    a0->f_1C = 0;
}
