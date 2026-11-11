/* LEVEL_24:0D0D50 -- clears the global record D_002F8F70 (three
   words and a float) when the second argument is 0xFFFF and the first one
   is not null. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_002F8F70;

void func_0D0D50(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_002F8F70.f_00 = 0;
            D_002F8F70.f_04 = 0;
            D_002F8F70.f_08 = 0;
            D_002F8F70.f_0C = 1.0f;
        }
    }
}
