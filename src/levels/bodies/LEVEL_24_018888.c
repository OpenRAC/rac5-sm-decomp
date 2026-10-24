typedef struct {
    float v0;
    float v1;
    float v2;
    float v3;
    char  pad[0x60];
    float w;
} Rec;

typedef struct {
    float v0;
    float v1;
    float v2;
    float v3;
} Src;

extern Rec D_001FBA60;

void func_018888(Src *src)
{
    D_001FBA60.v0 = src->v0;
    D_001FBA60.v1 = src->v1;
    D_001FBA60.v2 = src->v2;
    D_001FBA60.v3 = src->v3;
    D_001FBA60.w = 0.6f;
}
