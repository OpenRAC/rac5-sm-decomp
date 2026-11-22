/* LEVEL_07:0x1A0A70 -- loads default tuning records into two global tables when called with the all-ones id. */
extern float powf(float x, float y);

typedef struct {
    int w0;
    int w4;
    int w8;
    float wC;
} Head;

typedef struct {
    float a;
    float b;
    float c;
    float d;
    float e;
    float f;
    float g;
    char z[0];
} Tune;

extern Head D_003AC7A8;
extern Tune D_003AC7B8;
extern Tune D_003AC7D8;

void func_1A0A70(int a, int id)
{
    if (id == 0xFFFF) {
        if (a) {
            D_003AC7A8.w0 = 0;
            D_003AC7A8.w4 = 0;
            D_003AC7A8.w8 = 0;
            D_003AC7A8.wC = 1.0f;
            D_003AC7B8 = (Tune){ 0.10000000894069672f, powf(0.0f, 1.0f), 0.5f, 0.5f, 0.10000000149011612f, 0.5f, 0.5f };
            D_003AC7D8 = (Tune){ 0.30000001192092896f, powf(0.0f, 1.0f), 0.10000000149011612f, 0.10000000149011612f, 0.0f, 0.5f, 0.5f };
        }
    }
}
