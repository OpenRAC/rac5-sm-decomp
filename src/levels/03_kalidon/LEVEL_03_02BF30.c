/* LEVEL_03.REL:0x02BF30 -- reset of the global record D_0024C7B8. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_0024C7B8;

void func_03_02BF30(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0024C7B8.f_0C = 1.0f;
            D_0024C7B8.i_00 = 0;
            D_0024C7B8.i_08 = 0;
            D_0024C7B8.i_04 = 0;
        }
    }
}
