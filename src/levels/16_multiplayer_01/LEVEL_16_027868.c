/* LEVEL_16.REL:0x027868 -- resets the shared record to its idle state when the
   second word is 0xFFFF and the first is not null. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_001DFC88;

void func_027868(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_001DFC88.f_00 = 0;
            D_001DFC88.f_0C = 1.0f;
            D_001DFC88.f_08 = 0;
            D_001DFC88.f_04 = 0;
        }
    }
}
