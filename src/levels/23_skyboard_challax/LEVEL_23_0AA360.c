/* LEVEL_23:0x0AA360 -- placement copy of LEVEL_01_0B3580.c: refreshes one score slot's presentation: clears its flag, asks which rank it holds and, per rank, selects its two icon ids and places its two overlay elements. */
extern int D_001CF6D8[];
extern int D_001CF710[];
extern int D_001CF720[];
extern int D_001CF6E8[];
extern int D_001CF6F0[];
extern char D_002F9038[][16];
extern char D_002F9058[][16];
extern int func_0AA070(int i, int v);
extern void func_0A5478(int id, char *rec, float f);

void func_0AA360(int i)
{
    int r;

    D_001CF710[i] = 0;
    r = func_0AA070(i, D_001CF6D8[i]);
    D_001CF720[i] = r;
    switch (r) {
    case 0:
        D_001CF6F0[i] = 0x4A2;
        D_001CF6E8[i] = 0x49F;
        func_0A5478(0x70, D_002F9038[i], 0.0f);
        func_0A5478(0x74, D_002F9058[i], 0.0f);
        break;
    case 1:
        D_001CF6F0[i] = 0x4A3;
        D_001CF6E8[i] = 0x4A0;
        func_0A5478(0x71, D_002F9038[i], 0.0f);
        func_0A5478(0x75, D_002F9058[i], 0.0f);
        break;
    case 2:
    default:
        D_001CF6F0[i] = 0x4A4;
        D_001CF6E8[i] = 0x4A1;
        func_0A5478(0x72, D_002F9038[i], 0.0f);
        func_0A5478(0x76, D_002F9058[i], 0.0f);
        break;
    }
}
