/* LEVEL_18.REL:0x1275D0 -- resets the playback record D_002E2E70: three int words
   cleared and the float slot set to one, when the caller asks for it. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_002E2E70;

void func_1275D0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_002E2E70.f_00 = 0;
            D_002E2E70.f_0C = 1.0f;
            D_002E2E70.f_08 = 0;
            D_002E2E70.f_04 = 0;
        }
    }
}
