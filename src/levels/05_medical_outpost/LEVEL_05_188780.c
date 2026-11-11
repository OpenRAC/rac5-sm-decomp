/* LEVEL_05:0x188780 -- loads default tuning records into three global tables when called with the all-ones id. */
extern float powf(float x, float y);

typedef struct {
    float a;
    float b;
    float pad[4];
    float c;
    float d;
    void *ptr;
} TuneA;

typedef struct {
    float a;
    float b;
    float c;
    float d;
    float e;
    float f;
    float g;
    char z[0];
} TuneB;

typedef struct {
    int w0;
    int w4;
    int w8;
    float wC;
} Head;

extern Head D_0038E2A0;
extern float D_0038E2B0;
extern TuneA D_0038E2B8;
extern TuneB D_0038E2E0;
extern char D_001F77B8[];

void func_188780(int a, int id)
{
    if (id == 0xFFFF) {
        if (a) {
            D_0038E2A0.w0 = 0;
            D_0038E2A0.w4 = 0;
            D_0038E2A0.w8 = 0;
            D_0038E2A0.wC = 1.0f;
            D_0038E2B0 = 36.0f;
            D_0038E2B8 = (TuneA){ a: powf(0.95f, 1.0f), b: powf(0.95f, 1.0f), c: 0.030000001192092896f, d: 0.05000000447034836f, ptr: D_001F77B8 };
            D_0038E2E0 = (TuneB){ 0.004444445017725229f, powf(0.35f, 1.0f), 2.4f, 1.4f, 2.0f, 3.6f, 2.5f };
        }
    }
}
