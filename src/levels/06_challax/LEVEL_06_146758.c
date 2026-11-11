/* LEVEL_06.REL:0x146758 -- resets the level's record and refreshes its field. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_0037E828;
extern float D_0037E838;

extern float powf(float x, float y);

void func_146758(void *p, int sel)
{
    if (sel != 0xFFFF)
        return;
    if (p == 0)
        return;
    D_0037E828.b = 0;
    D_0037E828.c = 0;
    D_0037E828.a = 0;
    D_0037E828.d = 1.0f;
    {
        float *e = &D_0037E838;
        *e = powf(0.98f, 1.0f);
    }
}
