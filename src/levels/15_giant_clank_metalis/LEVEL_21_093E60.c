/* LEVEL_21:0x093E60 -- placement copy of LEVEL_01_0B3580.c: refreshes one score slot's presentation: clears its flag, asks which rank it holds and, per rank, selects its two icon ids and places its two overlay elements. */
extern int D_00150F58[];
extern int D_00150F90[];
extern int D_00150FA0[];
extern int D_00150F68[];
extern int D_00150F70[];
extern char D_0023FC38[][16];
extern char D_0023FC58[][16];
extern int func_093B58(int i, int v);
extern void func_08EFD0(int id, char *rec, float f);

void func_093E60(int i)
{
    int r;

    D_00150F90[i] = 0;
    r = func_093B58(i, D_00150F58[i]);
    D_00150FA0[i] = r;
    switch (r) {
    case 0:
        D_00150F70[i] = 0x4A2;
        D_00150F68[i] = 0x49F;
        func_08EFD0(0x70, D_0023FC38[i], 0.0f);
        func_08EFD0(0x74, D_0023FC58[i], 0.0f);
        break;
    case 1:
        D_00150F70[i] = 0x4A3;
        D_00150F68[i] = 0x4A0;
        func_08EFD0(0x71, D_0023FC38[i], 0.0f);
        func_08EFD0(0x75, D_0023FC58[i], 0.0f);
        break;
    case 2:
    default:
        D_00150F70[i] = 0x4A4;
        D_00150F68[i] = 0x4A1;
        func_08EFD0(0x72, D_0023FC38[i], 0.0f);
        func_08EFD0(0x76, D_0023FC58[i], 0.0f);
        break;
    }
}
