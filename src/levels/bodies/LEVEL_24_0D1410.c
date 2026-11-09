/* LEVEL_24:0x0D1410 -- placement copy of FRONTEND_0158F8.c: clears several state words and calls one helper when a flag word is set. */

extern int D_001D739C;
extern int D_001D73A0;
extern int D_001D73AC;
extern int D_001D73B8;
extern void func_0AF8B0(int a0);

void func_0D1410(int a0)
{
    int v;

    v = D_001D73B8;
    D_001D73AC = 0;
    if (v != 0 && a0 == 0) {
        func_0AF8B0(7);
    }
    D_001D73B8 = 0;
    D_001D739C = 0;
    D_001D73A0 = 0;
}
