/* LEVEL_24:0BE050 -- clears the global record D_002F5300 (three
   words and a float) when the second argument is 0xFFFF and the first one
   is not null. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_002F5300;

void func_0BE050(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_002F5300.f_00 = 0;
            D_002F5300.f_0C = 1.0f;
            D_002F5300.f_08 = 0;
            D_002F5300.f_04 = 0;
        }
    }
}
