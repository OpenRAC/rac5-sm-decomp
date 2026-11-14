/* LEVEL_09:0x18BF50 -- resets the level's record and refreshes its field. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_0037E8F0;
extern float D_0037E900;

extern float powf(float x, float y);

void func_18BF50(void *p, int sel)
{
    if (sel != 0xFFFF)
        return;
    if (p == 0)
        return;
    D_0037E8F0.b = 0;
    D_0037E8F0.c = 0;
    D_0037E8F0.a = 0;
    D_0037E8F0.d = 1.0f;
    {
        float *e = &D_0037E900;
        *e = powf(0.9f, 1.0f);
    }
}
