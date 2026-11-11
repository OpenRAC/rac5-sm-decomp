/* LEVEL_08:0x01C150 -- resets the record and flags it alive. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_0027EEB8;

void func_01C150(int a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_0027EEB8.f_00 = 0;
        D_0027EEB8.f_04 = 0;
        D_0027EEB8.f_08 = 0;
        D_0027EEB8.f_0C = 1.0f;
    }
}
