/* LEVEL_22:0C3620 -- clears the global record D_00282960 and writes 4 or 5
   into D_00282970, depending on the value read in D_00177C70. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;
extern Rec D_00282960;
extern int D_00282970;
extern int D_00177C70;
void func_0C3620(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            int flag = D_00177C70 ^ 0x18;
            int value = (flag == 0) ? 4 : 5;
            D_00282960.f_00 = 0;
            D_00282960.f_04 = 0;
            D_00282960.f_08 = 0;
            D_00282960.f_0C = 1.0f;
            D_00282970 = value;
        }
    }
}
