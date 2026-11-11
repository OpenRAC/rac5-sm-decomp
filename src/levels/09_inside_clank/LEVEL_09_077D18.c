/* LEVEL_09:0x077D18 -- resets the record and flags it alive. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_00221DC0;

void func_077D18(int a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_00221DC0.f_00 = 0;
        D_00221DC0.f_04 = 0;
        D_00221DC0.f_08 = 0;
        D_00221DC0.f_0C = 1.0f;
    }
}
