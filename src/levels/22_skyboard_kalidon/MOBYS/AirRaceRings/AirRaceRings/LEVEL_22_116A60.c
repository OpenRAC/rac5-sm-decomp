/* LEVEL_22:0x116A60 -- initialises the effect block: stores the packed id word (global settings value in the high half), the two sprite handles from the creator, the float 999.0 and the 0x12 count, starts the 0.46-scale effect, then looks up two assets and tunes the first one (floats +0x14/+0x1C) and the second one (floats +0x1C/+0x18) when found. */
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

extern Block D_002E7880;
extern int D_001ED9E8;

extern void func_178C28(void);
extern int func_0EB458(int a, int b, int c, void (*cb)(void), int d);
extern void func_08D018(float f, int handle, int count, int a, unsigned int b, unsigned int c);
extern int func_100C58(unsigned int value);

void func_116A60(void)
{
    D_002E7880.count_10C = 0x12;
    D_002E7880.handle_104 = func_0EB458(0x10, 0x360, 0, func_178C28, 0x205);
    D_002E7880.handle_108 = func_0EB458(0x10, 0x360, 0, func_178C28, 0x208);
    func_08D018(0.45999998f, D_002E7880.handle_104, D_002E7880.count_10C, 8, 0xFFFFFFFFU, 0x80C4C4C4U);
    D_002E7880.word_100 = (D_001ED9E8 << 16) | 0x50002451U;
    D_002E7880.f_114 = 999.0f;
    D_002E7880.asset_118 = (Asset *)func_100C58(0xB7C3765EU);
    if (D_002E7880.asset_118 != 0) {
        D_002E7880.asset_118->f_14 = 1.3f;
        D_002E7880.asset_118->f_1C = 30.0f;
    }
    D_002E7880.asset_11C = (Asset *)func_100C58(0x2629B934U);
    if (D_002E7880.asset_11C != 0) {
        D_002E7880.asset_11C->f_1C = 40.0f;
        D_002E7880.asset_11C->f_18 = 10.0f;
    }
}
