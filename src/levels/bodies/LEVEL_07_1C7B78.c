/* LEVEL_07.REL:0x1C7B78 -- resets the global record D_003ADD10 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_003ADD10;

void func_1C7B78(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003ADD10.i0 = 0;
            D_003ADD10.f3 = 1.0f;
            D_003ADD10.i2 = 0;
            D_003ADD10.i1 = 0;
        }
    }
}
