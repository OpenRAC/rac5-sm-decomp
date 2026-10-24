/* LEVEL_05.REL:0x0C8428 -- resets the shared record to its idle state when the
   second word is 0xFFFF and the first is not null. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_00317E88;

void func_0C8428(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00317E88.f_00 = 0;
            D_00317E88.f_0C = 1.0f;
            D_00317E88.f_08 = 0;
            D_00317E88.f_04 = 0;
        }
    }
}
