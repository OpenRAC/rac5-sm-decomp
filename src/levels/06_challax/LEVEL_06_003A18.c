/* LEVEL_06:0x003A18 -- sets a flag bit, copies a twelve-byte record and the
   two float arguments into the global record. */
typedef struct {
    int a;
    int b;
    int c;
} Rec12;

typedef struct {
    char pad0[0x40];
    unsigned long long f_40;
    char pad[0x208];
    Rec12 f_250;
    float f_25C;
    float f_260;
} Rec;

extern char D_1E0000[];

#define GP (*(Rec **)(D_1E0000 - 0x1EAC))

void func_003A18(Rec12 *a0, int a1, float f12, float f13)
{
    GP->f_40 |= 0x40000;
    GP->f_250 = *a0;
    GP->f_25C = f12;
    GP->f_260 = f13;
    if (a1) {
        GP->f_40 &= ~0x20;
    }
}
