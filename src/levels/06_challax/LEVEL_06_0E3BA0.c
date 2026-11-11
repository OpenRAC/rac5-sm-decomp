/* LEVEL_06:0x0E3BA0 -- resets the record and flags it alive. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_0031A468;

void func_0E3BA0(int a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_0031A468.f_00 = 0;
        D_0031A468.f_04 = 0;
        D_0031A468.f_08 = 0;
        D_0031A468.f_0C = 1.0f;
    }
}
