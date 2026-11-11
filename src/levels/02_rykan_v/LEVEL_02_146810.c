/* LEVEL_02:0x146810 -- the light of a view is refreshed: the slot is
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
    unsigned char spare;
    unsigned char flag;
    char pad[2];
} Light;

typedef struct {
    int a;
    int b;
    int c;
    float d;
} View;

extern View D_003A8D70;
extern Light D_003A8D80;
extern Sample D_00230A88;
extern float D_002308B0;

void *memset(void *dst, int value, unsigned int size);

void func_146810(void *obj, int mode)
{
    if (mode == 0xFFFF && obj != 0) {
        D_003A8D70.a = 0;
        D_003A8D70.b = 0;
        D_003A8D70.c = 0;
        D_003A8D70.d = 1.0f;

        memset(&D_003A8D80, 0, sizeof D_003A8D80);

        D_003A8D80.s = D_00230A88;
        D_003A8D80.d = 1.25f;
        D_003A8D80.e[0] = D_002308B0;
        D_003A8D80.e[1] = 0.5333333611488342f;
        D_003A8D80.e[2] = 0.699999988079071f;
        D_003A8D80.e[3] = 0.9921567440032959f;
        D_003A8D80.e[4] = -0.125f;
        D_003A8D80.flag = 1;
    }
}
