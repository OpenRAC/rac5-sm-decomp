/* LEVEL_07:0x07BE50 -- placement copy of LEVEL_01_079C60.c: duplicates matching table entries under a new key. */
typedef struct {
    int key;
    unsigned char b;
    int c;
    float d;
    int e;
    int f;
} E;
extern unsigned D_0020A418;
extern E D_0024FDB0[];

void func_07BE50(int a, int b)
{
    unsigned i;
    if (D_0020A418 < 16) {
        for (i = 0; i < D_0020A418; i++) {
            if (D_0024FDB0[i].key == b) {
                D_0024FDB0[D_0020A418].key = a;
                D_0024FDB0[D_0020A418].b = D_0024FDB0[i].b;
                D_0024FDB0[D_0020A418].c = D_0024FDB0[i].c;
                D_0024FDB0[D_0020A418].d = D_0024FDB0[i].d;
                D_0024FDB0[D_0020A418].e = D_0024FDB0[i].e;
                D_0024FDB0[D_0020A418].f = D_0024FDB0[i].f;
                D_0020A418++;
            }
        }
    }
}
