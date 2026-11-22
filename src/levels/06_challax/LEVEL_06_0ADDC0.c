/* LEVEL_06:0x0ADDC0 -- placement copy of LEVEL_01_0B3580.c: refreshes one score slot's presentation: clears its flag, asks which rank it holds and, per rank, selects its two icon ids and places its two overlay elements. */
extern int D_001EB1D8[];
extern int D_001EB210[];
extern int D_001EB220[];
extern int D_001EB1E8[];
extern int D_001EB1F0[];
extern char D_00314978[][16];
extern char D_00314998[][16];
extern int func_0ADAD0(int i, int v);
extern void func_0A8ED8(int id, char *rec, float f);

void func_0ADDC0(int i)
{
    int r;

    D_001EB210[i] = 0;
    r = func_0ADAD0(i, D_001EB1D8[i]);
    D_001EB220[i] = r;
    switch (r) {
    case 0:
        D_001EB1F0[i] = 0x4A2;
        D_001EB1E8[i] = 0x49F;
        func_0A8ED8(0x70, D_00314978[i], 0.0f);
        func_0A8ED8(0x74, D_00314998[i], 0.0f);
        break;
    case 1:
        D_001EB1F0[i] = 0x4A3;
        D_001EB1E8[i] = 0x4A0;
        func_0A8ED8(0x71, D_00314978[i], 0.0f);
        func_0A8ED8(0x75, D_00314998[i], 0.0f);
        break;
    case 2:
    default:
        D_001EB1F0[i] = 0x4A4;
        D_001EB1E8[i] = 0x4A1;
        func_0A8ED8(0x72, D_00314978[i], 0.0f);
        func_0A8ED8(0x76, D_00314998[i], 0.0f);
        break;
    }
}
