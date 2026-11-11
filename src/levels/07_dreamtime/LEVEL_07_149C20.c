/* LEVEL_07:0x149C20 -- the light of a view is refreshed: the slot is
   cleared, the sample is dropped in and the fade values are written. */
typedef struct {
    float f[2];
} Vec2;

typedef struct {
    Vec2 v;
    int i;
} Sample;

typedef struct {
    Sample s;
    float d;
    float e[5];
    unsigned char flag;
    char pad[3];
} Light;

typedef struct {
    int a;
    int b;
    int c;
    float d;
} View;

extern View D_003A7330;
extern Light D_003A7340;
extern Sample D_00231620;
extern float D_00231418;

void *memset(void *dst, int value, unsigned int size);

void func_149C20(void *obj, int mode)
{
    if (mode == 0xFFFF && obj != 0) {
        D_003A7330.a = 0;
        D_003A7330.b = 0;
        D_003A7330.c = 0;
        D_003A7330.d = 1.0f;

        memset(&D_003A7340, 0, sizeof D_003A7340);

        D_003A7340.s = D_00231620;
        D_003A7340.d = 1.25f;
        D_003A7340.e[0] = D_00231418;
        D_003A7340.e[1] = 0.8000000715255737f;
        D_003A7340.e[2] = 0.699999988079071f;
        D_003A7340.e[3] = 0.9921567440032959f;
        D_003A7340.e[4] = -0.125f;
        D_003A7340.flag = 1;
    }
}
