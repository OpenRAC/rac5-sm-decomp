/* LEVEL_08.REL:0x06A7B0 -- marks the object and latches the three scene words. */
typedef struct {
    char pad0[0x102];
    short w_102;
} Obj;

typedef struct {
    char pad0[0x3C];
    float f_3C;
    float f_40;
    char pad1[0x4C - 0x44];
    int f_4C;
} Scene;

extern Scene D_00288440;

int func_06A7B0(Obj *a0, int a1, float a, float b)
{
    a0->w_102 = 0x22;
    D_00288440.f_4C = a1;
    D_00288440.f_3C = a;
    D_00288440.f_40 = b;
    return 0;
}
