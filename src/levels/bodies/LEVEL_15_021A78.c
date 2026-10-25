/* LEVEL_15.REL:0x021A78 -- repairs the current slot, sends the scaled level
   to the mixer and arms the mode. */
typedef struct {
    char pad0[0x1C];
    int f_1C;
    char pad1[0x48 - 0x20];
    int f_48;
} Rec;

extern Rec *D_00148C2C;
extern int D_00148C34;

void func_000000(float v);

void func_021A78(float k)
{
    if (D_00148C2C->f_48 < 0) D_00148C2C->f_48 = D_00148C2C->f_1C;
    func_000000((float)D_00148C2C->f_1C / 255.0f * k);
    D_00148C34 = 5;
}
