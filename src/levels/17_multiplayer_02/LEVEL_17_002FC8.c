typedef struct {
    char pad[0x20C];
    float f20C;
    char pad2[0x08];
    float f218;
} S;

typedef struct {
    S *p;
} Holder;

extern Holder D_0018E2DC;

void func_002FC8(float f12, float f13)
{
    D_0018E2DC.p->f20C = f12;
    D_0018E2DC.p->f218 = f13;
}
