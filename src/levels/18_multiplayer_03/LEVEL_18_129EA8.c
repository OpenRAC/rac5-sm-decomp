/* LEVEL_18.REL:0x129EA8 -- resets the level's record and refreshes its field. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_002E2EA0;
extern float D_002E2EB0;

extern float powf(float x, float y);

void func_129EA8(void *p, int sel)
{
    if (sel != 0xFFFF)
        return;
    if (p == 0)
        return;
    D_002E2EA0.b = 0;
    D_002E2EA0.c = 0;
    D_002E2EA0.a = 0;
    D_002E2EA0.d = 1.0f;
    {
        float *e = &D_002E2EB0;
        *e = powf(0.98f, 1.0f);
    }
}
