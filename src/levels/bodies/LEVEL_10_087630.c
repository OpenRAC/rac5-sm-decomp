/* LEVEL_10.REL:0x087630 -- resets the shared record to its idle state when the
   second word is 0xFFFF and the first is not null. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_002442D0;

void func_087630(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_002442D0.f_00 = 0;
            D_002442D0.f_0C = 1.0f;
            D_002442D0.f_08 = 0;
            D_002442D0.f_04 = 0;
        }
    }
}
