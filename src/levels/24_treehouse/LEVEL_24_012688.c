/* LEVEL_24:0x012688 -- resets the global record D_1FB458. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_1FB458;
extern float D_1FB468;

void func_012688(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_1FB458.f_0C = 1.0f;
            D_1FB468 = 1.0f / 30.0f;
            D_1FB458.i_00 = 0;
            D_1FB458.i_08 = 0;
            D_1FB458.i_04 = 0;
        }
    }
}
