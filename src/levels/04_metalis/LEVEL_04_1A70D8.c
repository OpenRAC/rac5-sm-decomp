/* LEVEL_04.REL:0x1A70D8 -- resets the global record D_003B1B00 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_003B1B00;

void func_1A70D8(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003B1B00.i0 = 0;
            D_003B1B00.f3 = 1.0f;
            D_003B1B00.i2 = 0;
            D_003B1B00.i1 = 0;
        }
    }
}
