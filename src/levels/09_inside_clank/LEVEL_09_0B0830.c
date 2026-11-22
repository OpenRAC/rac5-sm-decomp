/* LEVEL_09:0x0B0830 -- placement copy of LEVEL_01_0B3580.c: refreshes one score slot's presentation: clears its flag, asks which rank it holds and, per rank, selects its two icon ids and places its two overlay elements. */
extern int D_001E60D8[];
extern int D_001E6110[];
extern int D_001E6120[];
extern int D_001E60E8[];
extern int D_001E60F0[];
extern char D_0030F378[][16];
extern char D_0030F398[][16];
extern int func_0B0540(int i, int v);
extern void func_0AB9B8(int id, char *rec, float f);

void func_0B0830(int i)
{
    int r;

    D_001E6110[i] = 0;
    r = func_0B0540(i, D_001E60D8[i]);
    D_001E6120[i] = r;
    switch (r) {
    case 0:
        D_001E60F0[i] = 0x4A2;
        D_001E60E8[i] = 0x49F;
        func_0AB9B8(0x70, D_0030F378[i], 0.0f);
        func_0AB9B8(0x74, D_0030F398[i], 0.0f);
        break;
    case 1:
        D_001E60F0[i] = 0x4A3;
        D_001E60E8[i] = 0x4A0;
        func_0AB9B8(0x71, D_0030F378[i], 0.0f);
        func_0AB9B8(0x75, D_0030F398[i], 0.0f);
        break;
    case 2:
    default:
        D_001E60F0[i] = 0x4A4;
        D_001E60E8[i] = 0x4A1;
        func_0AB9B8(0x72, D_0030F378[i], 0.0f);
        func_0AB9B8(0x76, D_0030F398[i], 0.0f);
        break;
    }
}
