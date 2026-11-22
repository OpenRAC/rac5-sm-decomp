/* LEVEL_05:0x0B1B40 -- placement copy of LEVEL_01_0B3580.c: refreshes one score slot's presentation: clears its flag, asks which rank it holds and, per rank, selects its two icon ids and places its two overlay elements. */
extern int D_001EB658[];
extern int D_001EB690[];
extern int D_001EB6A0[];
extern int D_001EB668[];
extern int D_001EB670[];
extern char D_00313AB8[][16];
extern char D_00313AD8[][16];
extern int func_0B1850(int i, int v);
extern void func_0ACCC8(int id, char *rec, float f);

void func_0B1B40(int i)
{
    int r;

    D_001EB690[i] = 0;
    r = func_0B1850(i, D_001EB658[i]);
    D_001EB6A0[i] = r;
    switch (r) {
    case 0:
        D_001EB670[i] = 0x4A2;
        D_001EB668[i] = 0x49F;
        func_0ACCC8(0x70, D_00313AB8[i], 0.0f);
        func_0ACCC8(0x74, D_00313AD8[i], 0.0f);
        break;
    case 1:
        D_001EB670[i] = 0x4A3;
        D_001EB668[i] = 0x4A0;
        func_0ACCC8(0x71, D_00313AB8[i], 0.0f);
        func_0ACCC8(0x75, D_00313AD8[i], 0.0f);
        break;
    case 2:
    default:
        D_001EB670[i] = 0x4A4;
        D_001EB668[i] = 0x4A1;
        func_0ACCC8(0x72, D_00313AB8[i], 0.0f);
        func_0ACCC8(0x76, D_00313AD8[i], 0.0f);
        break;
    }
}
