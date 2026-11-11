typedef struct {
    char pad0[0xD0];
    float fD0;
    char pad1[0x240 - 0xD4];
    float f240;
    char pad2[0x26C - 0x244];
    float f26C;
} S;

void func_0486A0(S *s);

void func_050078(S *s)
{
    s->f240 = 0.050000004f;
    s->f26C = s->fD0;
    func_0486A0(s);
}
