/* LEVEL_01:0x0B3580 -- refreshes one score slot's presentation: clears its flag, asks which rank it holds and, per rank, selects its two icon ids and places its two overlay elements. */
extern int D_001FC2D8[];
extern int D_001FC310[];
extern int D_001FC320[];
extern int D_001FC2E8[];
extern int D_001FC2F0[];
extern char D_00327BF8[][16];
extern char D_00327C18[][16];
extern int func_0B3290(int i, int v);
extern void func_0AE708(int id, char *rec, float f);

void func_0B3580(int i)
{
    int r;

    D_001FC310[i] = 0;
    r = func_0B3290(i, D_001FC2D8[i]);
    D_001FC320[i] = r;
    switch (r) {
    case 0:
        D_001FC2F0[i] = 0x4A2;
        D_001FC2E8[i] = 0x49F;
        func_0AE708(0x70, D_00327BF8[i], 0.0f);
        func_0AE708(0x74, D_00327C18[i], 0.0f);
        break;
    case 1:
        D_001FC2F0[i] = 0x4A3;
        D_001FC2E8[i] = 0x4A0;
        func_0AE708(0x71, D_00327BF8[i], 0.0f);
        func_0AE708(0x75, D_00327C18[i], 0.0f);
        break;
    case 2:
    default:
        D_001FC2F0[i] = 0x4A4;
        D_001FC2E8[i] = 0x4A1;
        func_0AE708(0x72, D_00327BF8[i], 0.0f);
        func_0AE708(0x76, D_00327C18[i], 0.0f);
        break;
    }
}
