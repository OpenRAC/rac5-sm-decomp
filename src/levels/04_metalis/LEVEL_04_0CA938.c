/* LEVEL_04:0x0CA938 -- placement copy of LEVEL_01_0C5120.c: converts a screen position to offset coordinates, mirrored when flagged. */
typedef struct {
    char pad0[0x10];
    int ox;
    int oy;
} Cfg;

extern float D_0021A038;
extern int D_00219FD8;
extern int D_00219FDC;
extern Cfg D_003461F0;
extern int func_029E98(int mode);

void func_0CA938(short *px, short *py, float x, float y)
{
    float sx, sy;
    *px = (int)x;
    *py = (int)y;
    sx = x - 256.0f;
    sy = y - 256.0f;
    x = sx * D_0021A038 + (float)D_003461F0.ox;
    y = sy * D_0021A038 + (float)D_003461F0.oy;
    *px = (int)(x + D_0021A038 * (float)D_00219FD8);
    *py = (int)(y + D_0021A038 * (float)D_00219FDC);
    if (func_029E98(4) != 0) {
        short t = *px - 0xF0;
        *px = 0xF0 - t;
    }
}
