/* LEVEL_02.REL:0x080DE8 -- resets the shared record to its idle state when the
   second word is 0xFFFF and the first is not null. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_00251930;

void func_080DE8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00251930.f_00 = 0;
            D_00251930.f_0C = 1.0f;
            D_00251930.f_08 = 0;
            D_00251930.f_04 = 0;
        }
    }
}
