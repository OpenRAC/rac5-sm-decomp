typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} S;

extern S D_0034BF28;

void func_11A828(int a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_0034BF28.f00 = 0;
        D_0034BF28.f0C = 1.0f;
        D_0034BF28.f08 = 0;
        D_0034BF28.f04 = 0;
    }
}
