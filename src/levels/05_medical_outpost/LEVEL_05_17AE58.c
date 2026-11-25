/* LEVEL_05:0x17AE58 -- placement copy of LEVEL_01_18C9C8.c: looks up five resources by hashed id (three of them built from config words, one picked by a global mode) and stores the results in consecutive globals. */
typedef struct {
    char pad00[0x2C];
    unsigned int f2C;
    char pad30[0x3C];
    unsigned int f6C;
    unsigned int f70;
} Cfg;

extern Cfg D_00283C80;
extern int D_002096F0;
extern int D_001F7514[1];
extern int D_001F7518;
extern int D_001F751C;
extern int D_001F7520;
extern int D_001F7524;
extern int func_107F80(unsigned int value);
extern int func_109C08(unsigned int value);
extern int func_1259E0(unsigned int value);
extern int func_126B40(unsigned int kind, int count);

void func_17AE58(void)
{
    D_001F7514[0] = func_126B40(0xD111E6F1u, 8);
    D_001F7518 = func_107F80((D_00283C80.f6C << 16) | 0xA00010C1u);
    D_001F751C = func_107F80((D_00283C80.f2C << 16) | 0xA00010C1u);
    D_001F7520 = func_109C08((D_00283C80.f70 << 16) | 0xA00010C1u);
    D_001F7524 = func_1259E0(D_002096F0 == 1 ? 0x6491CCF9u : 0xE9BC7179u);
}
