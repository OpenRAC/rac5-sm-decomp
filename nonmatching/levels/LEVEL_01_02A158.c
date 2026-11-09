/* LEVEL_01.REL:0x02A158: reviewed 368-byte candidate, held for ABI review.
 * Polls the two pending confirmation requests and applies the chosen answer:
 * accept resets the request and the screen state, decline of the first one
 * only clears its flag bit.
 * pinned C with gnu-ee-trial links 368/368 bytes and is byte-exact at this and
 * 19 other USA placements, but the prototypes disagree.
 * It declares func_132D90 returning int with no arguments, but the accepted
 * LEVEL_01_132D90.c defines it returning void with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct Game {
    char pad_00[0x1940];
    unsigned int flags_1940;
    char pad_1944[0x1C64 - 0x1944];
    int w_1C64;
};

extern unsigned char D_001F4498;
extern unsigned char D_001F4499;
extern struct Game *D_001F3FAC;
extern unsigned char D_001EF41C;

extern int func_02A3F0(int a);
extern void func_02A4B0(void);
extern int func_1324B0(int id);
extern void func_0D6F50(int a, int b, int c, int d);
extern int func_0D6A58(void);
extern void func_028A00(void);
extern int func_132D90(void);
extern void func_01A8A8(int a, int b);

void func_02A158(void)
{
    int r;

    if (func_02A3F0(7) != 0) {
        func_02A4B0();
    }
    if (D_001F4498 != 0) {
        int a;
        int b;
        int c;

        a = func_1324B0(0x2F0);
        b = func_1324B0(0x30A);
        c = func_1324B0(0x219);
        func_0D6F50(3, a, b, c);
        r = func_0D6A58();
        if (r == 1) {
            D_001F4498 = 0;
            func_028A00();
            D_001F3FAC->w_1C64 = 0;
            func_132D90();
            D_001EF41C = 0;
            func_01A8A8(1, 1);
        } else if (r == 2) {
            D_001F3FAC->flags_1940 &= ~0x800;
            D_001F4498 = 0;
        }
    } else if (D_001F4499 != 0) {
        int a;
        int b;

        a = func_1324B0(0x2F2);
        b = func_1324B0(0x1B7);
        func_0D6F50(1, a, b, 0);
        r = func_0D6A58();
        if (r == 1) {
            D_001F4499 = 0;
            func_028A00();
            D_001F3FAC->w_1C64 = 0;
            func_132D90();
            D_001EF41C = 0;
            func_01A8A8(1, 1);
        }
    }
}
