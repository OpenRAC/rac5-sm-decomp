/* LEVEL_24.REL:0x064840 -- resets the global record D_00205138 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_00205138;

void func_064840(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00205138.i0 = 0;
            D_00205138.f3 = 1.0f;
            D_00205138.i2 = 0;
            D_00205138.i1 = 0;
        }
    }
}
