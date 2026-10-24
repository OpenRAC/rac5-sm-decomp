/* LEVEL_19.REL:0x025530 -- hands the three channels of the current palette
   entry to the setter, the two colours scaled by 255. */
typedef struct {
    char pad0[0x18];
    int f_18;
    int f_1C;
    char pad1[0x50 - 0x20];
    int f_50;
} Palette;

extern Palette *D_001A2C34;

extern void setchan_f(float f) __asm__("func_000000");
extern void setchan_i(int v) __asm__("func_000000");

void func_025530(void)
{
    setchan_f((float)D_001A2C34->f_1C / 255.0f);
    setchan_f((float)D_001A2C34->f_18 / 255.0f);
    setchan_i(D_001A2C34->f_50);
}
