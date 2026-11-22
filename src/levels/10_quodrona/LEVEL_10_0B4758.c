/* LEVEL_10:0x0B4758 -- placement copy of LEVEL_01_0B3580.c: refreshes one score slot's presentation: clears its flag, asks which rank it holds and, per rank, selects its two icon ids and places its two overlay elements. */
extern int D_002052D8[];
extern int D_00205310[];
extern int D_00205320[];
extern int D_002052E8[];
extern int D_002052F0[];
extern char D_00330FF8[][16];
extern char D_00331018[][16];
extern int func_0B4468(int i, int v);
extern void func_0AF820(int id, char *rec, float f);

void func_0B4758(int i)
{
    int r;

    D_00205310[i] = 0;
    r = func_0B4468(i, D_002052D8[i]);
    D_00205320[i] = r;
    switch (r) {
    case 0:
        D_002052F0[i] = 0x4A2;
        D_002052E8[i] = 0x49F;
        func_0AF820(0x70, D_00330FF8[i], 0.0f);
        func_0AF820(0x74, D_00331018[i], 0.0f);
        break;
    case 1:
        D_002052F0[i] = 0x4A3;
        D_002052E8[i] = 0x4A0;
        func_0AF820(0x71, D_00330FF8[i], 0.0f);
        func_0AF820(0x75, D_00331018[i], 0.0f);
        break;
    case 2:
    default:
        D_002052F0[i] = 0x4A4;
        D_002052E8[i] = 0x4A1;
        func_0AF820(0x72, D_00330FF8[i], 0.0f);
        func_0AF820(0x76, D_00331018[i], 0.0f);
        break;
    }
}
