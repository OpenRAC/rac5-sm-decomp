/* LEVEL_04:0x07C968 -- placement copy of LEVEL_01_079C60.c: duplicates matching table entries under a new key. */
typedef struct {
    int key;
    unsigned char b;
    int c;
    float d;
    int e;
    int f;
} E;
extern unsigned D_0020F5D8;
extern E D_00254CC0[];

void func_07C968(int a, int b)
{
    unsigned i;
    if (D_0020F5D8 < 16) {
        for (i = 0; i < D_0020F5D8; i++) {
            if (D_00254CC0[i].key == b) {
                D_00254CC0[D_0020F5D8].key = a;
                D_00254CC0[D_0020F5D8].b = D_00254CC0[i].b;
                D_00254CC0[D_0020F5D8].c = D_00254CC0[i].c;
                D_00254CC0[D_0020F5D8].d = D_00254CC0[i].d;
                D_00254CC0[D_0020F5D8].e = D_00254CC0[i].e;
                D_00254CC0[D_0020F5D8].f = D_00254CC0[i].f;
                D_0020F5D8++;
            }
        }
    }
}
