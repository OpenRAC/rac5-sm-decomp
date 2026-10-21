/* LEVEL_06:0x0AD188 -- resets the global record D_00314758: three
   zero words and a float set to one, but only when the caller asks for the
   0xFFFF channel and gives a live object. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_00314758;

void func_0AD188(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00314758.f_00 = 0;
            D_00314758.f_04 = 0;
            D_00314758.f_08 = 0;
            D_00314758.f_0C = 1.0f;
        }
    }
}
