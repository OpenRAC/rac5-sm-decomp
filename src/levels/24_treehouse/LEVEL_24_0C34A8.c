/* LEVEL_24:0x0C34A8 -- resets the record and flags it alive. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_002F7D68;

void func_0C34A8(int a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_002F7D68.f_00 = 0;
        D_002F7D68.f_04 = 0;
        D_002F7D68.f_08 = 0;
        D_002F7D68.f_0C = 1.0f;
    }
}
