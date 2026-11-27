/* LEVEL_22:0x0B35D0 -- placement copy of LEVEL_01_0C5120.c: converts a screen position to offset coordinates, mirrored when flagged. */
typedef struct {
    char pad0[0x10];
    int ox;
    int oy;
} Cfg;

extern float D_0015FEF8;
extern int D_0015FE98;
extern int D_0015FE9C;
extern Cfg D_002815B0;
extern int func_024988(int mode);

void func_0B35D0(short *px, short *py, float x, float y)
{
    float sx, sy;
    *px = (int)x;
    *py = (int)y;
    sx = x - 256.0f;
    sy = y - 256.0f;
    x = sx * D_0015FEF8 + (float)D_002815B0.ox;
    y = sy * D_0015FEF8 + (float)D_002815B0.oy;
    *px = (int)(x + D_0015FEF8 * (float)D_0015FE98);
    *py = (int)(y + D_0015FEF8 * (float)D_0015FE9C);
    if (func_024988(4) != 0) {
        short t = *px - 0xF0;
        *px = 0xF0 - t;
    }
}
