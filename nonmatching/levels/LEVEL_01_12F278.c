/* LEVEL_01.REL:0x12F278: reviewed 448-byte candidate, held for ABI review.
 * Resolves three cached hashes and resets an object plus its three 0xF8-byte
 * records.
 * pinned C with gnu-ee-trial links 448/448 bytes and is byte-exact at this and
 * 16 other USA placements, but the prototypes disagree.
 * It declares func_12A068 returning int with (int), but the accepted
 * LEVEL_01_12A068.c defines it returning void with (int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct Rec {
    char pad0[0x68];
    unsigned int flags;
    int one;
    short s70;
    short s72;
    short s74;
    char pad1[0x84 - 0x76];
    short s84;
    char pad2[0xA4 - 0x86];
    unsigned char b0;
    unsigned char b1;
    char pad3[0xF8 - 0xA6];
} Rec;

extern int D_00206F2C;
extern int D_00206F30;
extern int D_00206F34;
extern float D_00217E78[3];
extern Rec D_003519E0[3];
extern unsigned short D_00297DC0;
extern int func_12A068(int);
extern void *memset(void *, int, unsigned int);

void func_12F278(char *o)
{
    Rec *r;
    float *pa;
    float *pb;

    if (D_00206F2C == 0)
        D_00206F2C = func_12A068(0x09B077B5);
    if (D_00206F30 == 0)
        D_00206F30 = func_12A068(0xE2727F03);
    if (D_00206F34 == 0)
        D_00206F34 = func_12A068(0x64A0B940);
    *(int *)(o + 0xC0) = 0;
    pa = (float *)(o + 0xA8);
    pb = (float *)(o + 0xB4);
    pa[0] = D_00217E78[0];
    pa[1] = D_00217E78[1];
    pa[2] = D_00217E78[2];
    pb[0] = D_00217E78[0];
    pb[1] = D_00217E78[1];
    pb[2] = D_00217E78[2];
    o[0xC9] = 0;
    o[0xC6] = 0;
    o[0xC7] = 0;
    o[0xC8] = 0;
    *(short *)(o + 0xC4) = -1;

    r = D_003519E0;
    memset(&r[0], 0, sizeof(Rec));
    r[0].one = 1;
    r[0].b1 = 0x12;

    r[0].b0 = 0;
    r[0].s74 = D_00297DC0;
    r[0].s84 = D_00297DC0;
    r[0].s70 = 1;
    r[0].flags |= 2;
    memset(&r[1], 0, sizeof(Rec));
    r[1].flags |= 2;
    r[1].one = 1;
    r[1].s74 = D_00297DC0;
    r[1].s84 = D_00297DC0;
    r[1].b1 = 0x12;
    r[1].b0 = 1;
    r[1].s70 = 1;

    memset(&r[2], 0, sizeof(Rec));
    r[2].flags |= 6;
    r[2].b1 = 0x12;
    r[2].b0 = 1;
    r[2].one = 1;
    r[2].s70 = 1;
    r[2].s74 = D_00297DC0;
    r[2].s84 = D_00297DC0;
}
