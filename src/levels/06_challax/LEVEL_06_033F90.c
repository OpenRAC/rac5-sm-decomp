/* LEVEL_06:0x033F90 -- placement copy of LEVEL_01_037540.c: lazily loads a set of cached assets and darkens the scale of four more. */
typedef struct A {
    char pad[0x14];
    float scale;
} A;

extern A *D_001E34FC;
extern A *D_001E3500;
extern A *D_001E3504;
extern A *D_001E350C;
extern A *D_001E3510;
extern A *D_001E3514;
extern A *D_001E3518;
extern A *D_001E3520[3];
extern A *D_001E352C;

extern A *func_1206C0(unsigned hash);

void func_033F90(void)
{
    if (!D_001E34FC)
        D_001E34FC = func_1206C0(0x1298E61B);
    if (!D_001E3500)
        D_001E3500 = func_1206C0(0xF4F95945);
    if (!D_001E3504)
        D_001E3504 = func_1206C0(0x090979AC);
    if (!D_001E350C)
        D_001E350C = func_1206C0(0xF5F63C3D);
    if (!D_001E3510)
        D_001E3510 = func_1206C0(0x5B9C5FD5);
    if (!D_001E3514)
        D_001E3514 = func_1206C0(0x4DABDBB6);
    if (!D_001E3518)
        D_001E3518 = func_1206C0(0xB84BF700);
    D_001E3520[0] = func_1206C0(0xC8DA3575);
    if (D_001E3520[0])
        D_001E3520[0]->scale *= 0.7f;
    D_001E3520[1] = func_1206C0(0x23ED8E76);
    if (D_001E3520[1])
        D_001E3520[1]->scale *= 0.7f;
    D_001E3520[2] = func_1206C0(0xCC2FE548);
    if (D_001E3520[2])
        D_001E3520[2]->scale *= 0.7f;
    D_001E352C = func_1206C0(0x8569B635);
    if (D_001E352C)
        D_001E352C->scale *= 0.7f;
}
