/* LEVEL_24.REL:0x0BE990 -- resets the global record D_002F5390 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_002F5390;

void func_0BE990(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_002F5390.i0 = 0;
            D_002F5390.f3 = 1.0f;
            D_002F5390.i2 = 0;
            D_002F5390.i1 = 0;
        }
    }
}
