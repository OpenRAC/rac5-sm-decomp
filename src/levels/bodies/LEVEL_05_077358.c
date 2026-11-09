/* LEVEL_05:0x077358 -- placement copy of LEVEL_01_079C60.c: duplicates matching table entries under a new key. */
typedef struct {
    int key;
    unsigned char b;
    int c;
    float d;
    int e;
    int f;
} E;
extern unsigned D_001E5498;
extern E D_00226370[];

void func_077358(int a, int b)
{
    unsigned i;
    if (D_001E5498 < 16) {
        for (i = 0; i < D_001E5498; i++) {
            if (D_00226370[i].key == b) {
                D_00226370[D_001E5498].key = a;
                D_00226370[D_001E5498].b = D_00226370[i].b;
                D_00226370[D_001E5498].c = D_00226370[i].c;
                D_00226370[D_001E5498].d = D_00226370[i].d;
                D_00226370[D_001E5498].e = D_00226370[i].e;
                D_00226370[D_001E5498].f = D_00226370[i].f;
                D_001E5498++;
            }
        }
    }
}
