/* LEVEL_07.REL:0x0762C0 -- reset of the global record D_0024F700. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_0024F700;

void func__0762C0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0024F700.f_0C = 1.0f;
            D_0024F700.i_00 = 0;
            D_0024F700.i_08 = 0;
            D_0024F700.i_04 = 0;
        }
    }
}
