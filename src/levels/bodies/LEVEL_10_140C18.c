/* LEVEL_10:0x140C18 -- resets the record and flags it alive. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_0039AD18;

void func_140C18(int a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_0039AD18.f_00 = 0;
        D_0039AD18.f_04 = 0;
        D_0039AD18.f_08 = 0;
        D_0039AD18.f_0C = 1.0f;
    }
}
