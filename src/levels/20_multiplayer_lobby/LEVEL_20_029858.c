/* LEVEL_20.REL:0x029858 -- resets the shared record: three zero words and a
   float set to one, when the tag matches and the caller asked for it. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_reset __asm__("D_138E70");

void func_029858(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_reset.f_00 = 0;
            D_reset.f_0C = 1.0f;
            D_reset.f_08 = 0;
            D_reset.f_04 = 0;
        }
    }
}
