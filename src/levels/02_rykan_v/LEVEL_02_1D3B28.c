/* LEVEL_02:0x1D3B28 -- resets the record and flags it alive. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_003B04C8;

void func_1D3B28(int a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_003B04C8.f_00 = 0;
        D_003B04C8.f_04 = 0;
        D_003B04C8.f_08 = 0;
        D_003B04C8.f_0C = 1.0f;
    }
}
