/* LEVEL_17:0x025F18 -- placement copy of LEVEL_16_026598.c: copies fields from a source record into one entry of a record table. */
typedef struct A {
    char pad0[0x18];
    int f18;
    int f1C;
    char pad20[4];
    int f24;
    float f28;
    float f2C;
    float f30;
    float f34;
    char pad38[8];
    int f40;
    int f44;
    char pad48[8];
    int f50;
} A;
typedef struct B {
    char pad0[0x2C];
    float f2C;
    float f30;
    float f34;
    float f38;
    char pad3C[4];
    int f40;
    int f44;
    int f48;
    int f4C;
    int f50;
    int f54;
    char pad58[0x5F8 - 0x58];
} B;
typedef struct GA { A *a; } GA;
typedef struct GB { B *b; } GB;
extern GA D_001950B4;
extern GB D_001950B8;

void func_025F18(int i)
{
    i *= sizeof(B);
    ((B *)((char *)D_001950B8.b + i))->f2C = D_001950B4.a->f28;
    ((B *)((char *)D_001950B8.b + i))->f30 = D_001950B4.a->f2C;
    ((B *)((char *)D_001950B8.b + i))->f34 = D_001950B4.a->f30;
    ((B *)((char *)D_001950B8.b + i))->f38 = D_001950B4.a->f34;
    ((B *)((char *)D_001950B8.b + i))->f40 = D_001950B4.a->f24;
    ((B *)((char *)D_001950B8.b + i))->f44 = D_001950B4.a->f40;
    D_001950B8.b->f48 = D_001950B4.a->f18;
    D_001950B8.b->f4C = D_001950B4.a->f1C;
    D_001950B8.b->f54 = D_001950B4.a->f50;
    ((B *)((char *)D_001950B8.b + i))->f50 = D_001950B4.a->f44;
}
