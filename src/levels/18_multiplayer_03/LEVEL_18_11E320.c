/* LEVEL_18.REL:0x11E320 -- resets the global record D_002E19C0 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_002E19C0;

void func_11E320(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_002E19C0.i0 = 0;
            D_002E19C0.f3 = 1.0f;
            D_002E19C0.i2 = 0;
            D_002E19C0.i1 = 0;
        }
    }
}
