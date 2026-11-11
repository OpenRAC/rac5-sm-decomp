typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_003426A0;
extern int D_003426B0;
extern int D_0022F4F0;

void func_0D7140(void *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003426A0.i0 = 0;
            D_003426A0.i1 = 0;
            D_003426A0.i2 = 0;
            D_003426A0.f3 = 1.0f;
            D_003426B0 = ((D_0022F4F0 ^ 0x18) == 0) ? 4 : 5;
        }
    }
}
