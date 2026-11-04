typedef struct {
    float f00;
    float f04;
    float f08;
    float f0C;
    float f10;
    float f14;
    float f18;
    float f1C;
    void *data20;
} Record;

typedef struct {
    int a;
    int b;
    int c;
    float d;
} Head;

extern Head D_00391788;
extern Record D_00391798;
extern char D_0021B5F8;
extern void *memset(void *dst, int value, unsigned int size);
extern float powf(float value, float exponent);

void func_13E298(void *object, int mode) {
    Record local;

    if (mode == 0xFFFF && object != 0) {
        Record *destination = &D_00391798;
        D_00391788.a = 0;
        D_00391788.b = 0;
        D_00391788.c = 0;
        D_00391788.d = 1.0f;
        memset(&local, 0, sizeof local);
        local.f00 = powf(0.949999988079071f, 1.0f);
        local.f04 = powf(0.949999988079071f, 1.0f);
        local.f0C = 1.0f;
        local.f10 = 0.0011111112544313073f;
        local.f14 = 0.0022222225088626146f;
        local.f18 = 0.004999999888241291f;
        local.f1C = 0.009999999776482582f;
        local.data20 = &D_0021B5F8;
        *destination = local;
    }
}
