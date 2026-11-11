/* LEVEL_19:0C40B0 -- resets the global record and writes the word chosen
   by the flag read from D_001D16A0. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_0027AFA0;
extern int D_0027AFB0;
extern unsigned int D_001D16A0;

void func_0C40B0(void *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0027AFA0.f_00 = 0;
            D_0027AFA0.f_04 = 0;
            D_0027AFA0.f_08 = 0;
            D_0027AFA0.f_0C = 1.0f;
            D_0027AFB0 = (D_001D16A0 == 0x18) ? 4 : 5;
        }
    }
}
