/* LEVEL_17.REL:0x0D5798 -- resets the global record D_0026CA18 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_0026CA18;

void func_0D5798(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0026CA18.i0 = 0;
            D_0026CA18.f3 = 1.0f;
            D_0026CA18.i2 = 0;
            D_0026CA18.i1 = 0;
        }
    }
}
