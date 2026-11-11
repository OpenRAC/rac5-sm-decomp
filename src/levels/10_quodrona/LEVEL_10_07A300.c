/* LEVEL_10:0x07A300 -- placement copy of LEVEL_01_079C60.c: duplicates matching table entries under a new key. */
typedef struct {
    int key;
    unsigned char b;
    int c;
    float d;
    int e;
    int f;
} E;
extern unsigned D_001FF118;
extern E D_002438B0[];

void func_07A300(int a, int b)
{
    unsigned i;
    if (D_001FF118 < 16) {
        for (i = 0; i < D_001FF118; i++) {
            if (D_002438B0[i].key == b) {
                D_002438B0[D_001FF118].key = a;
                D_002438B0[D_001FF118].b = D_002438B0[i].b;
                D_002438B0[D_001FF118].c = D_002438B0[i].c;
                D_002438B0[D_001FF118].d = D_002438B0[i].d;
                D_002438B0[D_001FF118].e = D_002438B0[i].e;
                D_002438B0[D_001FF118].f = D_002438B0[i].f;
                D_001FF118++;
            }
        }
    }
}
