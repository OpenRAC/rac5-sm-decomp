/* LEVEL_18:0x0C6178 -- placement copy of FRONTEND_0158F8.c: clears several state words and calls one helper when a flag word is set. */

extern int D_001B5A4C;
extern int D_001B5A50;
extern int D_001B5A5C;
extern int D_001B5A68;
extern void func_0A40A8(int a0);

void func_0C6178(int a0)
{
    int v;

    v = D_001B5A68;
    D_001B5A5C = 0;
    if (v != 0 && a0 == 0) {
        func_0A40A8(7);
    }
    D_001B5A68 = 0;
    D_001B5A4C = 0;
    D_001B5A50 = 0;
}
