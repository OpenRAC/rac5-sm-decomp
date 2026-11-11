/* LEVEL_20.REL:0x08C238 -- resets the shared record to its idle state when the
   second word is 0xFFFF and the first is not null. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_00199558;

void func_08C238(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00199558.f_00 = 0;
            D_00199558.f_0C = 1.0f;
            D_00199558.f_08 = 0;
            D_00199558.f_04 = 0;
        }
    }
}
