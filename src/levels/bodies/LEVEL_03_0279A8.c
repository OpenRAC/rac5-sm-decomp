/* LEVEL_03:0279A8 -- clamps the global record's cursor, converts the level's
   integer value to a normalised float, scales it and posts the new state. */
typedef struct {
    char pad0[0x1C];
    int f_1C;
    char pad1[0x28];
    int f_48;
} Rec;

extern Rec *D_0020C62C;
extern int D_0020C634;
extern void func_000000(float f12);

void func_0279A8(float f12)
{
    if (D_0020C62C->f_48 < 0) {
        D_0020C62C->f_48 = D_0020C62C->f_1C;
    }
    func_000000((float)D_0020C62C->f_1C / 255.0f * f12);
    D_0020C634 = 5;
}
