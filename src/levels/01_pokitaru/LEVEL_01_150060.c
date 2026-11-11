/* LEVEL_01.REL:0x150060 -- resets the level's record and refreshes its field. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_00391AA8;
extern float D_00391AB8;

extern float powf(float x, float y);

void func_150060(void *p, int sel)
{
    if (sel != 0xFFFF)
        return;
    if (p == 0)
        return;
    D_00391AA8.b = 0;
    D_00391AA8.c = 0;
    D_00391AA8.a = 0;
    D_00391AA8.d = 1.0f;
    {
        float *e = &D_00391AB8;
        *e = powf(0.98f, 1.0f);
    }
}
