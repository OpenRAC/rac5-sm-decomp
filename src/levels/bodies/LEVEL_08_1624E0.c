/* LEVEL_08.REL:0x1624E0 -- resets the level's record and refreshes its field. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_003E0DB8;
extern float D_003E0DC8;

extern float powf(float x, float y);

void func_1624E0(void *p, int sel)
{
    if (sel != 0xFFFF)
        return;
    if (p == 0)
        return;
    D_003E0DB8.b = 0;
    D_003E0DB8.c = 0;
    D_003E0DB8.a = 0;
    D_003E0DB8.d = 1.0f;
    {
        float *e = &D_003E0DC8;
        *e = powf(0.98f, 1.0f);
    }
}
