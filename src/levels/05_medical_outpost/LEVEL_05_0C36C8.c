/* LEVEL_05:0x0C36C8 -- placement copy of LEVEL_01_0C5120.c: converts a screen position to offset coordinates, mirrored when flagged. */
typedef struct {
    char pad0[0x10];
    int ox;
    int oy;
} Cfg;

extern float D_001EFEF8;
extern int D_001EFE98;
extern int D_001EFE9C;
extern Cfg D_003178B0;
extern int func_029068(int mode);

void func_0C36C8(short *px, short *py, float x, float y)
{
    float sx, sy;
    *px = (int)x;
    *py = (int)y;
    sx = x - 256.0f;
    sy = y - 256.0f;
    x = sx * D_001EFEF8 + (float)D_003178B0.ox;
    y = sy * D_001EFEF8 + (float)D_003178B0.oy;
    *px = (int)(x + D_001EFEF8 * (float)D_001EFE98);
    *py = (int)(y + D_001EFEF8 * (float)D_001EFE9C);
    if (func_029068(4) != 0) {
        short t = *px - 0xF0;
        *px = 0xF0 - t;
    }
}
