/* LEVEL_10:0x035EF0 -- placement copy of LEVEL_01_037540.c: lazily loads a set of cached assets and darkens the scale of four more. */
typedef struct A {
    char pad[0x14];
    float scale;
} A;

extern A *D_001FD5FC;
extern A *D_001FD600;
extern A *D_001FD604;
extern A *D_001FD60C;
extern A *D_001FD610;
extern A *D_001FD614;
extern A *D_001FD618;
extern A *D_001FD620[3];
extern A *D_001FD62C;

extern A *func_127EC8(unsigned hash);

void func_035EF0(void)
{
    if (!D_001FD5FC)
        D_001FD5FC = func_127EC8(0x1298E61B);
    if (!D_001FD600)
        D_001FD600 = func_127EC8(0xF4F95945);
    if (!D_001FD604)
        D_001FD604 = func_127EC8(0x090979AC);
    if (!D_001FD60C)
        D_001FD60C = func_127EC8(0xF5F63C3D);
    if (!D_001FD610)
        D_001FD610 = func_127EC8(0x5B9C5FD5);
    if (!D_001FD614)
        D_001FD614 = func_127EC8(0x4DABDBB6);
    if (!D_001FD618)
        D_001FD618 = func_127EC8(0xB84BF700);
    D_001FD620[0] = func_127EC8(0xC8DA3575);
    if (D_001FD620[0])
        D_001FD620[0]->scale *= 0.7f;
    D_001FD620[1] = func_127EC8(0x23ED8E76);
    if (D_001FD620[1])
        D_001FD620[1]->scale *= 0.7f;
    D_001FD620[2] = func_127EC8(0xCC2FE548);
    if (D_001FD620[2])
        D_001FD620[2]->scale *= 0.7f;
    D_001FD62C = func_127EC8(0x8569B635);
    if (D_001FD62C)
        D_001FD62C->scale *= 0.7f;
}
