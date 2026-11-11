/* LEVEL_02.REL:0x01AB40 -- copies four floats out of the argument record
   into the global at 0x00247060 and stamps 0.6f at its +0x70 slot. */
typedef struct {
    float a;
    float b;
    float c;
    float d;
    unsigned char pad[0x70 - 0x10];
    float e;
} Rec;

extern Rec D_00247060;

void func_01AB40(Rec *a0)
{
    D_00247060.a = a0->a;
    D_00247060.b = a0->b;
    D_00247060.c = a0->c;
    D_00247060.d = a0->d;
    D_00247060.e = 0.6f;
}
