/* LEVEL_06:0x0BFA20 -- placement copy of LEVEL_01_0C5120.c: converts a screen position to offset coordinates, mirrored when flagged. */
typedef struct {
    char pad0[0x10];
    int ox;
    int oy;
} Cfg;

extern float D_001EFA78;
extern int D_001EFA18;
extern int D_001EFA1C;
extern Cfg D_00318770;
extern int func_0287D8(int mode);

void func_0BFA20(short *px, short *py, float x, float y)
{
    float sx, sy;
    *px = (int)x;
    *py = (int)y;
    sx = x - 256.0f;
    sy = y - 256.0f;
    x = sx * D_001EFA78 + (float)D_00318770.ox;
    y = sy * D_001EFA78 + (float)D_00318770.oy;
    *px = (int)(x + D_001EFA78 * (float)D_001EFA18);
    *py = (int)(y + D_001EFA78 * (float)D_001EFA1C);
    if (func_0287D8(4) != 0) {
        short t = *px - 0xF0;
        *px = 0xF0 - t;
    }
}
