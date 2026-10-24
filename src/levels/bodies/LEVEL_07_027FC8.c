/* LEVEL_07.REL:0x027FC8 -- hands the three channels of the current palette
   entry to the setter, the two colours scaled by 255. */
typedef struct {
    char pad0[0x18];
    int f_18;
    int f_1C;
    char pad1[0x50 - 0x20];
    int f_50;
} Palette;

extern Palette *D_002082AC;

extern void setchan_f(float f) __asm__("func_000000");
extern void setchan_i(int v) __asm__("func_000000");

void func_027FC8(void)
{
    setchan_f((float)D_002082AC->f_1C / 255.0f);
    setchan_f((float)D_002082AC->f_18 / 255.0f);
    setchan_i(D_002082AC->f_50);
}
