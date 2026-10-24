/* LEVEL_10.REL:0x137220 -- resets the global record D_0039AB78 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_0039AB78;

void func_137220(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0039AB78.i0 = 0;
            D_0039AB78.f3 = 1.0f;
            D_0039AB78.i2 = 0;
            D_0039AB78.i1 = 0;
        }
    }
}
