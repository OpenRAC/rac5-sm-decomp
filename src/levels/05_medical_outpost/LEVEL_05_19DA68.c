/* LEVEL_05.REL:0x19DA68 -- resets the global record D_0038E640 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_0038E640;

void func_19DA68(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0038E640.i0 = 0;
            D_0038E640.f3 = 1.0f;
            D_0038E640.i2 = 0;
            D_0038E640.i1 = 0;
        }
    }
}
