/* LEVEL_02:0x0CBA30 -- placement copy of LEVEL_01_0C5120.c: converts a screen position to offset coordinates, mirrored when flagged. */
typedef struct {
    char pad0[0x10];
    int ox;
    int oy;
} Cfg;

extern float D_00215B38;
extern int D_00215AD8;
extern int D_00215ADC;
extern Cfg D_00342EF0;
extern int func_02ABB8(int mode);

void func_0CBA30(short *px, short *py, float x, float y)
{
    float sx, sy;
    *px = (int)x;
    *py = (int)y;
    sx = x - 256.0f;
    sy = y - 256.0f;
    x = sx * D_00215B38 + (float)D_00342EF0.ox;
    y = sy * D_00215B38 + (float)D_00342EF0.oy;
    *px = (int)(x + D_00215B38 * (float)D_00215AD8);
    *py = (int)(y + D_00215B38 * (float)D_00215ADC);
    if (func_02ABB8(4) != 0) {
        short t = *px - 0xF0;
        *px = 0xF0 - t;
    }
}
