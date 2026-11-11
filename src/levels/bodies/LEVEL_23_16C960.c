/* LEVEL_23:0x16C960 -- placement copy of LEVEL_01_181A78.c: allocates two buffers sized from a table, then stores a built word and calls a follow-up. */
typedef struct { int a; int b; int c; int d; int e; } T0;
typedef struct { int p; int q; int n; } T1;
typedef struct { char pad[0x2CC]; int v; } T2;
typedef struct { char pad[0x88]; int w; } T3;
extern T0 D_001DB150[];
extern T1 D_00364FE4[];
extern T2 D_00269200;
extern T3 D_00364F58;
extern int func_09C5A0(int n, int m);
extern int func_1B3FC8(int x);
extern void func_16C7F8(void);

void func_16C960(void)
{
    int i;
    for (i = 0; i != 2; i++) {
        int n = ((D_001DB150[i].b + 1) * 2 + 1) * (D_001DB150[i].a - 1) - 1;
        D_00364FE4[i].n = n;
        D_00364FE4[i].p = func_09C5A0(n * 48, 0);
    }
    D_00364F58.w = func_1B3FC8((D_00269200.v << 16) | 0xB8001059);
    func_16C7F8();
}
