/* LEVEL_03:0x0B3368 -- placement copy of LEVEL_01_0B3580.c: refreshes one score slot's presentation: clears its flag, asks which rank it holds and, per rank, selects its two icon ids and places its two overlay elements. */
extern int D_00214958[];
extern int D_00214990[];
extern int D_002149A0[];
extern int D_00214968[];
extern int D_00214970[];
extern char D_00342A78[][16];
extern char D_00342A98[][16];
extern int func_0B3078(int i, int v);
extern void func_0AE488(int id, char *rec, float f);

void func_0B3368(int i)
{
    int r;

    D_00214990[i] = 0;
    r = func_0B3078(i, D_00214958[i]);
    D_002149A0[i] = r;
    switch (r) {
    case 0:
        D_00214970[i] = 0x4A2;
        D_00214968[i] = 0x49F;
        func_0AE488(0x70, D_00342A78[i], 0.0f);
        func_0AE488(0x74, D_00342A98[i], 0.0f);
        break;
    case 1:
        D_00214970[i] = 0x4A3;
        D_00214968[i] = 0x4A0;
        func_0AE488(0x71, D_00342A78[i], 0.0f);
        func_0AE488(0x75, D_00342A98[i], 0.0f);
        break;
    case 2:
    default:
        D_00214970[i] = 0x4A4;
        D_00214968[i] = 0x4A1;
        func_0AE488(0x72, D_00342A78[i], 0.0f);
        func_0AE488(0x76, D_00342A98[i], 0.0f);
        break;
    }
}
