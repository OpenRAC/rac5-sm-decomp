typedef struct {
    char pad[0x0];
    float x;
    float y;
    float z;
} Src;

extern float D_00211130[3];

void f(Src *a0)
{
    D_00211130[0] = a0->x;
    D_00211130[1] = a0->y;
    D_00211130[2] = a0->z;
}
