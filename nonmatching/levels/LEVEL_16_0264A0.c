/* LEVEL_16.REL:0x0264A0: reviewed 244-byte candidate, held for ABI review.
 * Copies settings from an indexed table entry (and its head entry) into the
 * active record.
 * pinned C with gnu-ee-trial links 244/244 bytes and is byte-exact at this and
 * 4 other USA placements, but the prototypes disagree.
 * It defines the function returning int with (int), but the accepted caller
 * LEVEL_16_0AFEC8.c declares it returning void with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern char *D_001A1AB4;
extern char *D_001A1AB8;

#define REC(T, o) (*(T *)(D_001A1AB4 + (o)))
#define ROW(T, o) (*(T *)(D_001A1AB8 + off + (o)))
#define HEAD(T, o) (*(T *)(D_001A1AB8 + (o)))

int func_0264A0(int idx)
{
    int off = idx * 0x5F8;

    REC(int, 0xC) = 0;
    REC(int, 0x14) = 1;
    REC(int, 0x10) = 1;
    REC(int, 0x38) = 1;
    REC(float, 0x28) = ROW(float, 0x2C);
    REC(float, 0x2C) = ROW(float, 0x30);
    REC(float, 0x30) = ROW(float, 0x34);
    REC(float, 0x34) = ROW(float, 0x38);
    REC(int, 0x24) = ROW(int, 0x40);
    REC(int, 0x40) = ROW(int, 0x44);
    REC(int, 0x18) = HEAD(int, 0x48);
    REC(int, 0x1C) = HEAD(int, 0x4C);
    REC(int, 0x50) = HEAD(int, 0x54);
    REC(int, 0x44) = ROW(int, 0x50);
}
