/* LEVEL_08:0x0D0048 -- placement copy of LEVEL_01_0C5120.c: converts a screen position to offset coordinates, mirrored when flagged. */
typedef struct {
    char pad0[0x10];
    int ox;
    int oy;
} Cfg;

extern float D_00249A38;
extern int D_002499D8;
extern int D_002499DC;
extern Cfg D_0037AC70;
extern int func_02A968(int mode);

void func_0D0048(short *px, short *py, float x, float y)
{
    float sx, sy;
    *px = (int)x;
    *py = (int)y;
    sx = x - 256.0f;
    sy = y - 256.0f;
    x = sx * D_00249A38 + (float)D_0037AC70.ox;
    y = sy * D_00249A38 + (float)D_0037AC70.oy;
    *px = (int)(x + D_00249A38 * (float)D_002499D8);
    *py = (int)(y + D_00249A38 * (float)D_002499DC);
    if (func_02A968(4) != 0) {
        short t = *px - 0xF0;
        *px = 0xF0 - t;
    }
}
