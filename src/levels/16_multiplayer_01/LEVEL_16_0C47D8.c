/* LEVEL_16:0C47D8 -- resets the global record and writes the word chosen
   by the flag read from D_001D04A0. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_0027AE20;
extern int D_0027AE30;
extern unsigned int D_001D04A0;

void func_0C47D8(void *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0027AE20.f_00 = 0;
            D_0027AE20.f_04 = 0;
            D_0027AE20.f_08 = 0;
            D_0027AE20.f_0C = 1.0f;
            D_0027AE30 = (D_001D04A0 == 0x18) ? 4 : 5;
        }
    }
}
