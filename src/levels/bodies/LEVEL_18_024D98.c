/* LEVEL_18.REL:024D98 -- repairs the level's counter when it has wrapped and
   feeds the scaled value to the shared routine. */
typedef struct {
    char pad0[0x1C];
    int w_1C;
    char pad1[0x48 - 0x20];
    int w_48;
} G;

extern G *D_001A2F34;
extern int D_001A2F60;

extern void func_000000(float f);

void func_024D98(float f)
{
    G *g = D_001A2F34;

    if (g->w_48 < 0) {
        g->w_48 = g->w_1C;
    }
    func_000000(D_001A2F34->w_1C / 255.0f * f);
    D_001A2F60 = 5;
}
