/* LEVEL_10.REL:0x18CC78 -- resets the global record D_003A0060 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_003A0060;

void func_18CC78(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003A0060.i0 = 0;
            D_003A0060.f3 = 1.0f;
            D_003A0060.i2 = 0;
            D_003A0060.i1 = 0;
        }
    }
}
