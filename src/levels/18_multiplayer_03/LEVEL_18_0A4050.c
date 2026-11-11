/* LEVEL_18.REL:0x0A4050 -- resets the global record D_00276890 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_00276890;

void func_0A4050(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00276890.i0 = 0;
            D_00276890.f3 = 1.0f;
            D_00276890.i2 = 0;
            D_00276890.i1 = 0;
        }
    }
}
