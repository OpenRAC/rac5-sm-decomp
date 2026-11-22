/* LEVEL_07:0x0B55E0 -- placement copy of LEVEL_01_0B3580.c: refreshes one score slot's presentation: clears its flag, asks which rank it holds and, per rank, selects its two icon ids and places its two overlay elements. */
extern int D_002105D8[];
extern int D_00210610[];
extern int D_00210620[];
extern int D_002105E8[];
extern int D_002105F0[];
extern char D_0033D4F8[][16];
extern char D_0033D518[][16];
extern int func_0B52F0(int i, int v);
extern void func_0B0708(int id, char *rec, float f);

void func_0B55E0(int i)
{
    int r;

    D_00210610[i] = 0;
    r = func_0B52F0(i, D_002105D8[i]);
    D_00210620[i] = r;
    switch (r) {
    case 0:
        D_002105F0[i] = 0x4A2;
        D_002105E8[i] = 0x49F;
        func_0B0708(0x70, D_0033D4F8[i], 0.0f);
        func_0B0708(0x74, D_0033D518[i], 0.0f);
        break;
    case 1:
        D_002105F0[i] = 0x4A3;
        D_002105E8[i] = 0x4A0;
        func_0B0708(0x71, D_0033D4F8[i], 0.0f);
        func_0B0708(0x75, D_0033D518[i], 0.0f);
        break;
    case 2:
    default:
        D_002105F0[i] = 0x4A4;
        D_002105E8[i] = 0x4A1;
        func_0B0708(0x72, D_0033D4F8[i], 0.0f);
        func_0B0708(0x76, D_0033D518[i], 0.0f);
        break;
    }
}
