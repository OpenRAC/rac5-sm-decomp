/* LEVEL_08.REL @ 0x055390 — 52 octets, lwc1/swc1 */
typedef struct {
    char padD0[0xD0];
    float fD0;
    char padD4[0x16C];
    float f240;
    char pad244[0x28];
    float f26C;
} Rec;

void func_04D7A8();

void func_055390(Rec *a0)
{
    float f1 = a0->fD0;

    a0->f240 = 0.05000000447034836f;
    a0->f26C = f1;
    func_04D7A8(a0);
}
