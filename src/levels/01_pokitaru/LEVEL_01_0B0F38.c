/* LEVEL_01.REL:0x0B0F38 -- resets the global record D_0031D590 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_0031D590;

void func_0B0F38(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0031D590.i0 = 0;
            D_0031D590.f3 = 1.0f;
            D_0031D590.i2 = 0;
            D_0031D590.i1 = 0;
        }
    }
}
