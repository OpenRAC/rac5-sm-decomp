/* LEVEL_10.REL:0x0E1418 -- resets the playback record D_00336A68: three int words
   cleared and the float slot set to one, when the caller asks for it. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_00336A68;

void func_0E1418(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00336A68.f_00 = 0;
            D_00336A68.f_0C = 1.0f;
            D_00336A68.f_08 = 0;
            D_00336A68.f_04 = 0;
        }
    }
}
