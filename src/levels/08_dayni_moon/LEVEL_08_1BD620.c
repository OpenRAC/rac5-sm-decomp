/* LEVEL_08:0x1BD620 -- placement copy of LEVEL_04_19C8F0.c: runs the table setup call, packs three settings values into the high half of three constant-tagged words (the first one copied to a fourth word) and stores the result of the follow-up call in a global. */
typedef struct {
    char pad_000[0x1B0];
    int v_1B0;
    int v_1B4;
    int v_1B8;
} Settings;

extern Settings D_002E7040;
extern char D_003E80D0[];
extern unsigned int D_003E8550;
extern unsigned int D_003E8554;
extern unsigned int D_003E8558;
extern unsigned int D_003E855C;
extern int D_00251E2C;

extern void func_0A8198(char *table, int a, int b, int c);
extern int func_13B5A0(unsigned int value);

void func_1BD620(void)
{
    func_0A8198(D_003E80D0, 0x18, 3, 3);
    D_003E8550 = (D_002E7040.v_1B0 << 16) | 0x4800004DU;
    D_003E8554 = (D_002E7040.v_1B8 << 16) | 0x4800004DU;
    D_003E8558 = D_003E8550;
    D_003E855C = (D_002E7040.v_1B4 << 16) | 0x4800004DU;
    D_00251E2C = func_13B5A0(0xFD31BD2CU);
}
