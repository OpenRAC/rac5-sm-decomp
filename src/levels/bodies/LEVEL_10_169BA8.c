/* LEVEL_10:169BA8 -- clears the global record D_0039F118 (three
   words and a float) when the second argument is 0xFFFF and the first one
   is not null. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_0039F118;

void func_169BA8(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0039F118.f_00 = 0;
            D_0039F118.f_04 = 0;
            D_0039F118.f_08 = 0;
            D_0039F118.f_0C = 1.0f;
        }
    }
}
