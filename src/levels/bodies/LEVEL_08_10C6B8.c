/* LEVEL_08.REL:0x10C6B8 -- resets the global record D_003808D8 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_003808D8;

void func_10C6B8(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003808D8.i0 = 0;
            D_003808D8.f3 = 1.0f;
            D_003808D8.i2 = 0;
            D_003808D8.i1 = 0;
        }
    }
}
