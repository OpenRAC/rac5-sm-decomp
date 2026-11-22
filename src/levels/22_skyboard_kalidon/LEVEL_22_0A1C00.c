/* LEVEL_22:0x0A1C00 -- placement copy of LEVEL_01_0B3580.c: refreshes one score slot's presentation: clears its flag, asks which rank it holds and, per rank, selects its two icon ids and places its two overlay elements. */
extern int D_0015B658[];
extern int D_0015B690[];
extern int D_0015B6A0[];
extern int D_0015B668[];
extern int D_0015B670[];
extern char D_0027D7B8[][16];
extern char D_0027D7D8[][16];
extern int func_0A1910(int i, int v);
extern void func_09CD18(int id, char *rec, float f);

void func_0A1C00(int i)
{
    int r;

    D_0015B690[i] = 0;
    r = func_0A1910(i, D_0015B658[i]);
    D_0015B6A0[i] = r;
    switch (r) {
    case 0:
        D_0015B670[i] = 0x4A2;
        D_0015B668[i] = 0x49F;
        func_09CD18(0x70, D_0027D7B8[i], 0.0f);
        func_09CD18(0x74, D_0027D7D8[i], 0.0f);
        break;
    case 1:
        D_0015B670[i] = 0x4A3;
        D_0015B668[i] = 0x4A0;
        func_09CD18(0x71, D_0027D7B8[i], 0.0f);
        func_09CD18(0x75, D_0027D7D8[i], 0.0f);
        break;
    case 2:
    default:
        D_0015B670[i] = 0x4A4;
        D_0015B668[i] = 0x4A1;
        func_09CD18(0x72, D_0027D7B8[i], 0.0f);
        func_09CD18(0x76, D_0027D7D8[i], 0.0f);
        break;
    }
}
