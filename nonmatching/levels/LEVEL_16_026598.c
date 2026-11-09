/* LEVEL_16.REL:0x026598: reviewed 208-byte candidate, held for ABI review.
 * Copies fields from a source record into one entry of a record table.
 * pinned C with gnu-ee-trial links 208/208 bytes and is byte-exact at this and
 * 4 other USA placements, but the prototypes disagree.
 * It defines the function returning void with (int), but the accepted caller
 * LEVEL_16_0AFEF8.c declares it returning void with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
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
extern GA D_001A1AB4;
extern GB D_001A1AB8;

void func_026598(int i)
{
    i *= sizeof(B);
    ((B *)((char *)D_001A1AB8.b + i))->f2C = D_001A1AB4.a->f28;
    ((B *)((char *)D_001A1AB8.b + i))->f30 = D_001A1AB4.a->f2C;
    ((B *)((char *)D_001A1AB8.b + i))->f34 = D_001A1AB4.a->f30;
    ((B *)((char *)D_001A1AB8.b + i))->f38 = D_001A1AB4.a->f34;
    ((B *)((char *)D_001A1AB8.b + i))->f40 = D_001A1AB4.a->f24;
    ((B *)((char *)D_001A1AB8.b + i))->f44 = D_001A1AB4.a->f40;
    D_001A1AB8.b->f48 = D_001A1AB4.a->f18;
    D_001A1AB8.b->f4C = D_001A1AB4.a->f1C;
    D_001A1AB8.b->f54 = D_001A1AB4.a->f50;
    ((B *)((char *)D_001A1AB8.b + i))->f50 = D_001A1AB4.a->f44;
}
