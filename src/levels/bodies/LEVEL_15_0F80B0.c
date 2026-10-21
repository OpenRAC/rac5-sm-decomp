/* LEVEL_15:0x0F80B0 -- resets the level's record and refreshes its field. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_002A8B40;
extern float D_002A8B50;

extern float expf(float x);

void func_0F80B0(void *p, int sel)
{
    if (sel != 0xFFFF)
        return;
    if (p == 0)
        return;
    D_002A8B40.d = 1.0f;
    D_002A8B40.a = 0;
    D_002A8B40.c = 0;
    D_002A8B40.b = 0;
    {
        float *e = &D_002A8B50;
        *e = expf(-10.0f);
    }
}
