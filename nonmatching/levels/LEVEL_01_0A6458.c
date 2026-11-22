/* USA LEVEL_01.REL:0x0A6458, 536-byte candidate (22 November 2026).
 * Measured pinned: 17 differing words; first difference at 0x80.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Map {
    char pad00[0x1810];
    unsigned char *cells;
} Map;

extern Map D_00313D30;
extern int D_001F68E0;

extern int func_0A69B8(void);
extern int func_024EC8(int id, int arg);
extern int func_027408(int id, int arg);
extern int func_0A7B30(unsigned short x, unsigned short y);
extern void func_0A79D0(unsigned short x, unsigned short y, int tile, int flag);

int func_0A6458(void)
{
    unsigned short x;
    unsigned short y;
    int tile;
    int shift;
    int ice;
    int flag;
    int done;
    unsigned char hit;
    unsigned char mask;

    if (func_0A69B8() == 0) {
        return 0;
    }
    ice = func_024EC8(0x17, -1);
    flag = 0;
    if (func_027408(0x9C, 0xFF) != 0 || ice != 0) {
        flag = 1;
    }
    for (y = 0; y < 0x200; y++) {
        for (x = 0; x < 0x200; x++) {
            hit = func_0A7B30(x, y);
            if (x < 0x201 && y < 0x201 && D_00313D30.cells != 0) {
                shift = ((x ^ 1) & 1) ? 4 : 0;
                mask = 0xF << shift;
                tile = (D_00313D30.cells[y * 0x100 + (x >> 1)] & mask) >> shift;
            } else {
                tile = 0;
            }
            if (D_001F68E0 == 4) {
                done = 0;
                if (flag) {
                    switch (tile) {
                    case 4:
                        tile = 2;
                        done = 1;
                        break;
                    case 9:
                        done = 1;
                        tile = 3;
                        break;
                    }
                }
                if (done) {
                    func_0A79D0(x, y, tile, 1);
                    continue;
                }
            }
            if (hit != 0) {
                if (tile == 5) {
                    tile = 0xE;
                }
                func_0A79D0(x, y, tile, 1);
            } else if (ice != 0) {
                if (tile == 5) {
                    func_0A79D0(x, y, 5, 1);
                }
            } else if (D_001F68E0 == 4 && flag && tile == 5) {
                func_0A79D0(x, y, 0xD, 1);
            }
        }
    }
    return 1;
}
