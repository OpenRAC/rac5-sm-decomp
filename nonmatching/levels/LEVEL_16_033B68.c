/* LEVEL_16.REL:0x033B68: reviewed 204-byte candidate, held for ABI review.
 * Initializes two tables and stores four created handles.
 * pinned C with gnu-ee-trial links 204/204 bytes and is byte-exact at this and
 * 4 other USA placements, but the prototypes disagree.
 * It declares func_0EF4D8 returning int with (int), but the accepted
 * LEVEL_16_0EF4D8.c defines it returning void with (int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern void func_033AD8(void *);
extern void func_058CF8(void);
extern void func_04C630(void);
extern int func_0ED9E8(int);
extern int func_0EF4D8(int);
extern int func_06E3A0(int, int, int, int, int, int);
extern void func_0336B8(void);

struct S24E240 {
    char pad0[0x2C];
    int f2C;
    char pad30[0x3C];
    int f6C;
    char pad70[0x24];
    int f94;
    char pad98[0x28];
    int fC0;
};

extern char D_001E4090[];
extern char D_001E7A80[];
extern struct S24E240 D_0024E240;
extern int D_001A2124;
extern int D_001A2128;
extern int D_001A212C;
extern int D_001A2130;

void func_033B68(void)
{
    func_033AD8(D_001E4090);
    func_033AD8(D_001E7A80);
    func_058CF8();
    func_04C630();
    D_001A2128 = func_0ED9E8((D_0024E240.f6C << 16) | 0xA00010C1);
    D_001A212C = func_0ED9E8((D_0024E240.f2C << 16) | 0xA00010C1);
    D_001A2124 = func_0EF4D8((D_0024E240.fC0 << 16) | 0xA0001041);
    D_001A2130 = func_06E3A0(D_0024E240.f94, 10, 0, 1, 0, 2);
    func_0336B8();
}
