/* LEVEL_04:0x19C8F0 -- runs the table setup call, packs three settings values into the high half of three constant-tagged words (the first one copied to a fourth word) and stores the result of the follow-up call in a global. */
typedef struct {
    char pad_000[0x1B0];
    int v_1B0;
    int v_1B4;
    int v_1B8;
} Settings;

extern Settings D_002B25C0;
extern char D_003B1500[];
extern unsigned int D_003B1980;
extern unsigned int D_003B1984;
extern unsigned int D_003B1988;
extern unsigned int D_003B198C;
extern int D_00221E44;

extern void func_0A2AB0(char *table, int a, int b, int c);
extern int func_1364E8(unsigned int value);

void func_19C8F0(void)
{
    func_0A2AB0(D_003B1500, 0x18, 3, 3);
    D_003B1980 = (D_002B25C0.v_1B0 << 16) | 0x4800004DU;
    D_003B1984 = (D_002B25C0.v_1B8 << 16) | 0x4800004DU;
    D_003B1988 = D_003B1980;
    D_003B198C = (D_002B25C0.v_1B4 << 16) | 0x4800004DU;
    D_00221E44 = func_1364E8(0xFD31BD2CU);
}
