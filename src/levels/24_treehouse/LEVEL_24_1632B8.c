/* LEVEL_24:0x1632B8 -- placement copy of LEVEL_01_17E288.c: fills the angle terms of a table of records and rounds the shared pair of scale factors to a common multiple. */
typedef struct Rec {
    int id;
    unsigned int bits;
    char pad08[8];
    float f10;
    float f14;
    char pad18[8];
    float angle;
    char pad24[4];
    float sine;
    float cosine;
} Rec;

extern int D_00263C80[];
extern float cosf(float x);
extern float sqrtf(float x);
extern float floorf(float x);
extern float fabsf(float x);
extern int func_163230(int a, int b);

void func_1632B8(Rec *rec, int count, float *scale)
{
    Rec *end;
    int idx;
    unsigned int bits;
    float a;
    float c;
    float s;
    int x;
    int y;
    int x2;
    int y2;

    end = rec + count;
    for (; rec != end; rec++) {
        bits = rec->bits;
        if (rec->id != -1) {
            idx = D_00263C80[rec->id];
        } else {
            idx = 0x7FC;
        }
        rec->bits = (bits & 0xF800FFFF) | idx << 16;
        a = rec->angle;
        c = cosf(a);
        s = sqrtf(1.0f - c * c);
        if (a < 0.0f) {
            s = -s;
        }
        rec->cosine = c;
        rec->sine = s;
        x = (int)floorf(fabsf(rec->f10) + 0.5f);
        y = (int)floorf(scale[0] + 0.5f);
        scale[0] = (float)(x * y / func_163230(x, y));
        x2 = (int)floorf(fabsf(rec->f14) + 0.5f);
        y2 = (int)floorf(scale[1] + 0.5f);
        scale[1] = (float)(x2 * y2 / func_163230(x2, y2));
    }
}
