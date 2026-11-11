typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_003B1FC0;
extern float D_003B1FD0;
extern float D_002216E0;

void func_1A2948(void *p, int sel)
{
    if (sel != 0xFFFF)
        return;
    if (p == 0)
        return;
    D_003B1FD0 = 1.0f / D_002216E0;
    D_003B1FC0.c = 0;
    D_003B1FC0.a = 0;
    D_003B1FC0.d = 1.0f;
    D_003B1FC0.b = 0;

}
