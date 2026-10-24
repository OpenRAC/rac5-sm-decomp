/* LEVEL_08.REL:0x19B3E0 -- resets the shared record to its idle state when the
   second word is 0xFFFF and the first is not null. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_003E6D70;

void func_19B3E0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003E6D70.f_00 = 0;
            D_003E6D70.f_0C = 1.0f;
            D_003E6D70.f_08 = 0;
            D_003E6D70.f_04 = 0;
        }
    }
}
