/* LEVEL_04:0x0B8C70 -- placement copy of LEVEL_01_0B3580.c: refreshes one score slot's presentation: clears its flag, asks which rank it holds and, per rank, selects its two icon ids and places its two overlay elements. */
extern int D_00215798[];
extern int D_002157D0[];
extern int D_002157E0[];
extern int D_002157A8[];
extern int D_002157B0[];
extern char D_003423F8[][16];
extern char D_00342418[][16];
extern int func_0B8980(int i, int v);
extern void func_0B3958(int id, char *rec, float f);

void func_0B8C70(int i)
{
    int r;

    D_002157D0[i] = 0;
    r = func_0B8980(i, D_00215798[i]);
    D_002157E0[i] = r;
    switch (r) {
    case 0:
        D_002157B0[i] = 0x4A2;
        D_002157A8[i] = 0x49F;
        func_0B3958(0x70, D_003423F8[i], 0.0f);
        func_0B3958(0x74, D_00342418[i], 0.0f);
        break;
    case 1:
        D_002157B0[i] = 0x4A3;
        D_002157A8[i] = 0x4A0;
        func_0B3958(0x71, D_003423F8[i], 0.0f);
        func_0B3958(0x75, D_00342418[i], 0.0f);
        break;
    case 2:
    default:
        D_002157B0[i] = 0x4A4;
        D_002157A8[i] = 0x4A1;
        func_0B3958(0x72, D_003423F8[i], 0.0f);
        func_0B3958(0x76, D_00342418[i], 0.0f);
        break;
    }
}
