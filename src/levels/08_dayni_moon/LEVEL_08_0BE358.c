/* LEVEL_08:0x0BE358 -- placement copy of LEVEL_01_0B3580.c: refreshes one score slot's presentation: clears its flag, asks which rank it holds and, per rank, selects its two icon ids and places its two overlay elements. */
extern int D_00245198[];
extern int D_002451D0[];
extern int D_002451E0[];
extern int D_002451A8[];
extern int D_002451B0[];
extern char D_00376E78[][16];
extern char D_00376E98[][16];
extern int func_0BE068(int i, int v);
extern void func_0B9040(int id, char *rec, float f);

void func_0BE358(int i)
{
    int r;

    D_002451D0[i] = 0;
    r = func_0BE068(i, D_00245198[i]);
    D_002451E0[i] = r;
    switch (r) {
    case 0:
        D_002451B0[i] = 0x4A2;
        D_002451A8[i] = 0x49F;
        func_0B9040(0x70, D_00376E78[i], 0.0f);
        func_0B9040(0x74, D_00376E98[i], 0.0f);
        break;
    case 1:
        D_002451B0[i] = 0x4A3;
        D_002451A8[i] = 0x4A0;
        func_0B9040(0x71, D_00376E78[i], 0.0f);
        func_0B9040(0x75, D_00376E98[i], 0.0f);
        break;
    case 2:
    default:
        D_002451B0[i] = 0x4A4;
        D_002451A8[i] = 0x4A1;
        func_0B9040(0x72, D_00376E78[i], 0.0f);
        func_0B9040(0x76, D_00376E98[i], 0.0f);
        break;
    }
}
