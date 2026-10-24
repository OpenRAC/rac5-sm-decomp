typedef struct {
    char pad[0x0];
    float x;
    float y;
    float z;
} Src;

extern float D_001CCDF0[3];

void f(Src *a0)
{
    D_001CCDF0[0] = a0->x;
    D_001CCDF0[1] = a0->y;
    D_001CCDF0[2] = a0->z;
}
