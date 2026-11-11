/* LEVEL_09:0x175508 -- placement copy of LEVEL_01_181A78.c: allocates two buffers sized from a table, then stores a built word and calls a follow-up. */
typedef struct { int a; int b; int c; int d; int e; } T0;
typedef struct { int p; int q; int n; } T1;
typedef struct { char pad[0x2CC]; int v; } T2;
typedef struct { char pad[0x88]; int w; } T3;
extern T0 D_001F1928[];
extern T1 D_0037E1E4[];
extern T2 D_0027F540;
extern T3 D_0037E158;
extern int func_0A2B10(int n, int m);
extern int func_1CFD78(int x);
extern void func_1753A0(void);

void func_175508(void)
{
    int i;
    for (i = 0; i != 2; i++) {
        int n = ((D_001F1928[i].b + 1) * 2 + 1) * (D_001F1928[i].a - 1) - 1;
        D_0037E1E4[i].n = n;
        D_0037E1E4[i].p = func_0A2B10(n * 48, 0);
    }
    D_0037E158.w = func_1CFD78((D_0027F540.v << 16) | 0xB8001059);
    func_1753A0();
}
