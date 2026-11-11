/* LEVEL_08:0x1A42F0 -- placement copy of LEVEL_01_181A78.c: allocates two buffers sized from a table, then stores a built word and calls a follow-up. */
typedef struct { int a; int b; int c; int d; int e; } T0;
typedef struct { int p; int q; int n; } T1;
typedef struct { char pad[0x2CC]; int v; } T2;
typedef struct { char pad[0x88]; int w; } T3;
extern T0 D_00251090[];
extern T1 D_003E7A64[];
extern T2 D_002E7040;
extern T3 D_003E79D8;
extern int func_0B0158(int n, int m);
extern int func_22ADB8(int x);
extern void func_1A4188(void);

void func_1A42F0(void)
{
    int i;
    for (i = 0; i != 2; i++) {
        int n = ((D_00251090[i].b + 1) * 2 + 1) * (D_00251090[i].a - 1) - 1;
        D_003E7A64[i].n = n;
        D_003E7A64[i].p = func_0B0158(n * 48, 0);
    }
    D_003E79D8.w = func_22ADB8((D_002E7040.v << 16) | 0xB8001059);
    func_1A4188();
}
