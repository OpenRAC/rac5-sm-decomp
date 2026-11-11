/* LEVEL_06:0x0730E8 -- placement copy of LEVEL_01_079C60.c: duplicates matching table entries under a new key. */
typedef struct {
    int key;
    unsigned char b;
    int c;
    float d;
    int e;
    int f;
} E;
extern unsigned D_001E5018;
extern E D_00227230[];

void func_0730E8(int a, int b)
{
    unsigned i;
    if (D_001E5018 < 16) {
        for (i = 0; i < D_001E5018; i++) {
            if (D_00227230[i].key == b) {
                D_00227230[D_001E5018].key = a;
                D_00227230[D_001E5018].b = D_00227230[i].b;
                D_00227230[D_001E5018].c = D_00227230[i].c;
                D_00227230[D_001E5018].d = D_00227230[i].d;
                D_00227230[D_001E5018].e = D_00227230[i].e;
                D_00227230[D_001E5018].f = D_00227230[i].f;
                D_001E5018++;
            }
        }
    }
}
