/* LEVEL_04.REL:0x0D1820 -- resets the global record D_003467E8 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_003467E8;

void func_0D1820(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003467E8.i0 = 0;
            D_003467E8.f3 = 1.0f;
            D_003467E8.i2 = 0;
            D_003467E8.i1 = 0;
        }
    }
}
