/* LEVEL_18:0x0B3608 -- placement copy of LEVEL_01_0C5120.c: converts a screen position to offset coordinates, mirrored when flagged. */
typedef struct {
    char pad0[0x10];
    int ox;
    int oy;
} Cfg;

extern float D_001B0070;
extern int D_001B0010;
extern int D_001B0014;
extern Cfg D_00279CB0;
extern int func_0273E8(int mode);

void func_0B3608(short *px, short *py, float x, float y)
{
    float sx, sy;
    *px = (int)x;
    *py = (int)y;
    sx = x - 256.0f;
    sy = y - 256.0f;
    x = sx * D_001B0070 + (float)D_00279CB0.ox;
    y = sy * D_001B0070 + (float)D_00279CB0.oy;
    *px = (int)(x + D_001B0070 * (float)D_001B0010);
    *py = (int)(y + D_001B0070 * (float)D_001B0014);
    if (func_0273E8(4) != 0) {
        short t = *px - 0xF0;
        *px = 0xF0 - t;
    }
}
