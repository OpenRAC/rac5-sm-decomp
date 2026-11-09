/* LEVEL_22:0x06C620 -- placement copy of LEVEL_01_079C60.c: duplicates matching table entries under a new key. */
typedef struct {
    int key;
    unsigned char b;
    int c;
    float d;
    int e;
    int f;
} E;
extern unsigned D_00155498;
extern E D_0018C0B0[];

void func_06C620(int a, int b)
{
    unsigned i;
    if (D_00155498 < 16) {
        for (i = 0; i < D_00155498; i++) {
            if (D_0018C0B0[i].key == b) {
                D_0018C0B0[D_00155498].key = a;
                D_0018C0B0[D_00155498].b = D_0018C0B0[i].b;
                D_0018C0B0[D_00155498].c = D_0018C0B0[i].c;
                D_0018C0B0[D_00155498].d = D_0018C0B0[i].d;
                D_0018C0B0[D_00155498].e = D_0018C0B0[i].e;
                D_0018C0B0[D_00155498].f = D_0018C0B0[i].f;
                D_00155498++;
            }
        }
    }
}
