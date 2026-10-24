/* LEVEL_10:0x04E930 -- stamps the two level fields and runs the tick. */
typedef struct {
    char pad0[0xD0];
    float fD0;
    char pad1[0x240 - 0xD4];
    float f240;
    char pad2[0x26C - 0x244];
    float f26C;
} Rec;

extern void func_046DA8(Rec *);

void func_04E930(Rec *a0)
{
    a0->f240 = 0.050000004f;
    a0->f26C = a0->fD0;
    func_046DA8(a0);
}
