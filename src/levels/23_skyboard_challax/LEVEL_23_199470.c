/* LEVEL_23.REL:0x199470 -- resets the global record D_00366618: three zero
   words and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_00366618;

void func_199470(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00366618.f_00 = 0;
            D_00366618.f_0C = 1.0f;
            D_00366618.f_08 = 0;
            D_00366618.f_04 = 0;
        }
    }
}
