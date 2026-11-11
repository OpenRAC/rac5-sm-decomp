/* LEVEL_02:0x001440 -- copies the shared slot at +0xF8 into +0xFC. */
typedef struct {
    char pad_00[0xF8];
    float f_F8;
    float f_FC;
} G;

extern G *D_00203EC8;

void func_001440(void)
{
    G *g = D_00203EC8;

    g->f_FC = g->f_F8;
}
