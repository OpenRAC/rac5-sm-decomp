/* LEVEL_02:0x174180 -- placement copy of LEVEL_01_15FF08.c: loads a default tuning block into a global when asked to reset. */
typedef struct Tune {
    float f0, f1, f2, f3, f4, f5, f6, f7, f8, f9;
    float f10, f11, f12, f13, f14, f15, f16, f17, f18, f19;
    int i20;
    float f21, f22, f23, f24, f25;
    int i26, i27;
    int pad[3];
} Tune;

extern float powf(float x, float y);
extern void *memset(void *p, int c, unsigned int n);
extern float D_003AB860[4];
extern Tune D_003AB870;

void func_174180(int a, int b)
{
    if (b != 0xFFFF)
        return;
    if (a == 0)
        return;
    D_003AB860[0] = 0.0f;
    D_003AB860[1] = 0.0f;
    D_003AB860[2] = 0.0f;
    D_003AB860[3] = 1.0f;
    D_003AB870 = (Tune){
        52.5f, 22.5f, 0.333333343f, 0.5f, 0.87f, 0.0523598827f, 0.418879062f, 60.0f,
        -0.000222222254f, 10.0f, -0.0222222246f, powf(0.6f, 1.0f), 0.8f, 0.7f, 0.5f, 0.6f,
        0.00666666729f, 0.99f, 0.95f, 4.5f, 2, 3.0f, 0.0f, 0.051f, 10.0f, 30.0f,
        0xB69, 0x200
    };
}
