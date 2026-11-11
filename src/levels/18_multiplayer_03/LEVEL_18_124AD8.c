/* LEVEL_18.REL:0x124AD8 -- resets the global record D_002E2E48 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_002E2E48;

void func_124AD8(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_002E2E48.i0 = 0;
            D_002E2E48.f3 = 1.0f;
            D_002E2E48.i2 = 0;
            D_002E2E48.i1 = 0;
        }
    }
}
