/* LEVEL_10:0x0C6498 -- placement copy of LEVEL_01_0C5120.c: converts a screen position to offset coordinates, mirrored when flagged. */
typedef struct {
    char pad0[0x10];
    int ox;
    int oy;
} Cfg;

extern float D_00209B78;
extern int D_00209B18;
extern int D_00209B1C;
extern Cfg D_00334DF0;
extern int func_02A1C8(int mode);

void func_0C6498(short *px, short *py, float x, float y)
{
    float sx, sy;
    *px = (int)x;
    *py = (int)y;
    sx = x - 256.0f;
    sy = y - 256.0f;
    x = sx * D_00209B78 + (float)D_00334DF0.ox;
    y = sy * D_00209B78 + (float)D_00334DF0.oy;
    *px = (int)(x + D_00209B78 * (float)D_00209B18);
    *py = (int)(y + D_00209B78 * (float)D_00209B1C);
    if (func_02A1C8(4) != 0) {
        short t = *px - 0xF0;
        *px = 0xF0 - t;
    }
}
