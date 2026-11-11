/* LEVEL_02.REL:0x1F0120 -- resets the global record D_003B0C40 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_003B0C40;

void func_1F0120(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003B0C40.i0 = 0;
            D_003B0C40.f3 = 1.0f;
            D_003B0C40.i2 = 0;
            D_003B0C40.i1 = 0;
        }
    }
}
