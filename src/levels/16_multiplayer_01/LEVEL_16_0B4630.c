/* LEVEL_16:0x0B4630 -- placement copy of LEVEL_01_0C5120.c: converts a screen position to offset coordinates, mirrored when flagged. */
typedef struct {
    char pad0[0x10];
    int ox;
    int oy;
} Cfg;

extern float D_001AEBF0;
extern int D_001AEB90;
extern int D_001AEB94;
extern Cfg D_00279930;
extern int func_027E38(int mode);

void func_0B4630(short *px, short *py, float x, float y)
{
    float sx, sy;
    *px = (int)x;
    *py = (int)y;
    sx = x - 256.0f;
    sy = y - 256.0f;
    x = sx * D_001AEBF0 + (float)D_00279930.ox;
    y = sy * D_001AEBF0 + (float)D_00279930.oy;
    *px = (int)(x + D_001AEBF0 * (float)D_001AEB90);
    *py = (int)(y + D_001AEBF0 * (float)D_001AEB94);
    if (func_027E38(4) != 0) {
        short t = *px - 0xF0;
        *px = 0xF0 - t;
    }
}
