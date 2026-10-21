typedef struct {
    float pad[0x83];
    float a;
    float pad2[2];
    float b;
} Rec;

typedef struct {
    Rec *p;
} Holder;

extern Holder D_143EBC;

void func_002F28(float v0, float v1)
{
    D_143EBC.p->a = v0;
    D_143EBC.p->b = v1;
}
