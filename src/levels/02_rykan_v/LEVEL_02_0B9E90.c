/* LEVEL_02:0x0B9E90 -- placement copy of LEVEL_01_0B3580.c: refreshes one score slot's presentation: clears its flag, asks which rank it holds and, per rank, selects its two icon ids and places its two overlay elements. */
extern int D_00211298[];
extern int D_002112D0[];
extern int D_002112E0[];
extern int D_002112A8[];
extern int D_002112B0[];
extern char D_0033F0F8[][16];
extern char D_0033F118[][16];
extern int func_0B9BA0(int i, int v);
extern void func_0B5018(int id, char *rec, float f);

void func_0B9E90(int i)
{
    int r;

    D_002112D0[i] = 0;
    r = func_0B9BA0(i, D_00211298[i]);
    D_002112E0[i] = r;
    switch (r) {
    case 0:
        D_002112B0[i] = 0x4A2;
        D_002112A8[i] = 0x49F;
        func_0B5018(0x70, D_0033F0F8[i], 0.0f);
        func_0B5018(0x74, D_0033F118[i], 0.0f);
        break;
    case 1:
        D_002112B0[i] = 0x4A3;
        D_002112A8[i] = 0x4A0;
        func_0B5018(0x71, D_0033F0F8[i], 0.0f);
        func_0B5018(0x75, D_0033F118[i], 0.0f);
        break;
    case 2:
    default:
        D_002112B0[i] = 0x4A4;
        D_002112A8[i] = 0x4A1;
        func_0B5018(0x72, D_0033F0F8[i], 0.0f);
        func_0B5018(0x76, D_0033F118[i], 0.0f);
        break;
    }
}
