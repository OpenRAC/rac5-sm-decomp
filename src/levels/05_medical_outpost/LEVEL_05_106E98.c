typedef struct {
    unsigned char pad[0x14];
    void *p14;
    float f18;
    int i1c;
} Rec;

typedef struct {
    unsigned char pad[0x24];
    float f24;
} Partner;

extern void func_094B08(Rec *a0, void *a1, void *a2);

void func_106E98(Rec *a0, void *a1, Partner *a2, void *a3)
{
    float t;
    func_094B08(a0, a1, 0);
    a0->i1c = a3;
    t = a2->f24 * 30.0f;
    a0->p14 = a2;
    a0->f18 = 1.0f / t;
}