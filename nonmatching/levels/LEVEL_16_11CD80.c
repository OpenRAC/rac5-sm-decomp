/* LEVEL_16.REL:0x11CD80: reviewed 220-byte candidate, held for ABI review.
 * Draws a colored label for the current table entry.
 * pinned C with gnu-ee-trial links 220/220 bytes and is byte-exact at this and
 * 4 other USA placements, but the prototypes disagree.
 * It declares func_09BBC8 returning void with (int, int, int, int, int, int),
 * but the accepted LEVEL_16_09BBC8.c defines it returning void with (int, int,
 * int, int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern int D_0019AEA0;
extern int D_001B8560[];
extern int D_001B8588[];
extern char D_001CFDB0[];
extern char D_002E1450[];
extern void func_097540(int a, int b);
extern void func_09BBC8(int a, int b, int c, int d, int e, int col);
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_097360(int col);
extern void func_099138(int x, int y, char *s, float sx, float sy);

void func_11CD80(void)
{
    int i = D_0019AEA0;
    if (D_001B8560[i] != 0) {
        func_097540(i, 0);
        func_09BBC8(0x3A, 0x1C2, 0xEB, 0x40, 0x40, (D_001B8560[i] << 24) | 0xFFFFFF);
        sprintf(D_002E1450, D_001CFDB0, D_001B8588[i]);
        func_097360((D_001B8560[i] << 24) | 0xFFFFFF);
        func_099138(0x1C2, 0xF0, D_002E1450, 1.75f, 1.75f);
    }
}
