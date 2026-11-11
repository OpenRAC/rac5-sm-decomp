/* LEVEL_23:0x13DE18 -- placement copy of LEVEL_22_116A60.c: initialises the effect block: stores the packed id word (global settings value in the high half), the two sprite handles from the creator, the float 999.0 and the 0x12 count, starts the 0.46-scale effect, then looks up two assets and tunes the first one (floats +0x14/+0x1C) and the second one (floats +0x1C/+0x18) when found. */
typedef struct {
    float pad_00[2];
    float f_08;
    float f_0C;
    float f_10;
    float f_14;
    float f_18;
    float f_1C;
} Asset;

typedef struct {
    char pad_000[0x100];
    unsigned int word_100;
    int handle_104;
    int handle_108;
    int count_10C;
    int pad_110;
    float f_114;
    Asset *asset_118;
    Asset *asset_11C;
} Block;

extern Block D_00363498;
extern int D_00269268;

extern void func_1EFA98(void);
extern int func_101F18(int a, int b, int c, void (*cb)(void), int d);
extern void func_0949F8(float f, int handle, int count, int a, unsigned int b, unsigned int c);
extern int func_11AEE0(unsigned int value);

void func_13DE18(void)
{
    D_00363498.count_10C = 0x12;
    D_00363498.handle_104 = func_101F18(0x10, 0x360, 0, func_1EFA98, 0x205);
    D_00363498.handle_108 = func_101F18(0x10, 0x360, 0, func_1EFA98, 0x208);
    func_0949F8(0.45999998f, D_00363498.handle_104, D_00363498.count_10C, 8, 0xFFFFFFFFU, 0x80C4C4C4U);
    D_00363498.word_100 = (D_00269268 << 16) | 0x50002451U;
    D_00363498.f_114 = 999.0f;
    D_00363498.asset_118 = (Asset *)func_11AEE0(0xB7C3765EU);
    if (D_00363498.asset_118 != 0) {
        D_00363498.asset_118->f_14 = 1.3f;
        D_00363498.asset_118->f_1C = 30.0f;
    }
    D_00363498.asset_11C = (Asset *)func_11AEE0(0x2629B934U);
    if (D_00363498.asset_11C != 0) {
        D_00363498.asset_11C->f_1C = 40.0f;
        D_00363498.asset_11C->f_18 = 10.0f;
    }
}
