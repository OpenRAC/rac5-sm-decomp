typedef struct {
    char pad_00[0x3C];
    float f_3C;
    float f_40;
    char pad_44[0x8];
    int f_4C;
} Rec;

typedef struct {
    char pad_00[0x102];
    short h_102;
} Obj;

extern Rec D_002506C0;

int func_06A000(Obj *a0, int a1, float a, float b)
{
    a0->h_102 = 0x22;
    D_002506C0.f_4C = a1;
    D_002506C0.f_3C = a;
    D_002506C0.f_40 = b;
    return 0;
}
