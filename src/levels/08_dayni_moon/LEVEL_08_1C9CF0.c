/* LEVEL_08:0x1C9CF0 -- registers five packed keys with the lookup helpers (three built from words of the global settings block) and stores the results in globals. */
typedef struct Blk {
    char pad_00[0xB8];
    unsigned int wB8;
    char pad_BC[0x128 - 0xBC];
    unsigned int w128;
} Blk;

extern Blk D_002E7040;
extern int D_00252054;
extern int D_00252058;
extern int D_0025205C;
extern int D_00252060;
extern int D_00252064;
extern int func_22D308(unsigned int value);
extern int func_22D368(unsigned int value);
extern int func_110E80(unsigned int value);
extern int func_13B5A0(unsigned int value);

void func_1C9CF0(void)
{
    Blk *s0;

    s0 = &D_002E7040;
    D_00252054 = func_22D308((s0->w128 << 16) | 0x5800F0C1u);
    D_00252058 = func_22D368((s0->w128 << 16) | 0x580030C1u);
    D_0025205C = func_110E80((s0->wB8 << 16) | 0x500010C1u);
    D_00252060 = func_13B5A0(0x18454B8Bu);
    D_00252064 = func_13B5A0(0x18454B8Bu);
}
