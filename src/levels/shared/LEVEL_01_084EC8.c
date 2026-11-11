typedef struct {
    char pad[0x34];
    float f34;
    float f38;
    float f3C;
    float f40;
} Src;

typedef struct {
    float f00;
    float f04;
    float f08;
    float f0C;
} Dst;

void func_084EC8(Src *a0, Dst *a1)
{
    float *s = (float *)((char *)a0 + 0x34);

    a1->f00 = s[0];
    a1->f04 = s[1];
    a1->f08 = s[2];
    a1->f0C = s[3];
}
