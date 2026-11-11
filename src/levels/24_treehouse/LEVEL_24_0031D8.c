typedef struct {
    char pad[0x20C];
    float f20C;
    char pad2[0x08];
    float f218;
} S;

typedef struct {
    S *p;
} Holder;

extern Holder D_001BFED4;

void func_0031D8(float f12, float f13)
{
    D_001BFED4.p->f20C = f12;
    D_001BFED4.p->f218 = f13;
}
