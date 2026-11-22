/* LEVEL_24:0x0ACDF8 -- placement copy of LEVEL_01_0B3580.c: refreshes one score slot's presentation: clears its flag, asks which rank it holds and, per rank, selects its two icon ids and places its two overlay elements. */
extern int D_001CCF58[];
extern int D_001CCF90[];
extern int D_001CCFA0[];
extern int D_001CCF68[];
extern int D_001CCF70[];
extern char D_002F3AB8[][16];
extern char D_002F3AD8[][16];
extern int func_0ACB08(int i, int v);
extern void func_0A7F80(int id, char *rec, float f);

void func_0ACDF8(int i)
{
    int r;

    D_001CCF90[i] = 0;
    r = func_0ACB08(i, D_001CCF58[i]);
    D_001CCFA0[i] = r;
    switch (r) {
    case 0:
        D_001CCF70[i] = 0x4A2;
        D_001CCF68[i] = 0x49F;
        func_0A7F80(0x70, D_002F3AB8[i], 0.0f);
        func_0A7F80(0x74, D_002F3AD8[i], 0.0f);
        break;
    case 1:
        D_001CCF70[i] = 0x4A3;
        D_001CCF68[i] = 0x4A0;
        func_0A7F80(0x71, D_002F3AB8[i], 0.0f);
        func_0A7F80(0x75, D_002F3AD8[i], 0.0f);
        break;
    case 2:
    default:
        D_001CCF70[i] = 0x4A4;
        D_001CCF68[i] = 0x4A1;
        func_0A7F80(0x72, D_002F3AB8[i], 0.0f);
        func_0A7F80(0x76, D_002F3AD8[i], 0.0f);
        break;
    }
}
