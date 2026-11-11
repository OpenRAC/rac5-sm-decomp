/* LEVEL_16.REL:0x0A0128 -- resets the global record D_00275C20 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_00275C20;

void func_0A0128(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00275C20.i0 = 0;
            D_00275C20.f3 = 1.0f;
            D_00275C20.i2 = 0;
            D_00275C20.i1 = 0;
        }
    }
}
