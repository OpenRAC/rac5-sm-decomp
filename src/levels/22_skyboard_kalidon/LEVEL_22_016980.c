/* LEVEL_22:0x016980 -- copies the vector and stores the extra factor. */
typedef struct {
    float a;
    float b;
    float c;
    float d;
    char pad[0x10 - 0x10];
    float e;
} Rec;

extern Rec D_1817B0;

void func_016980(Rec *src, float v)
{
    D_1817B0.a = src->a;
    D_1817B0.b = src->b;
    D_1817B0.c = src->c;
    D_1817B0.d = src->d;
    D_1817B0.e = v;
}
