/* LEVEL_01:0x079C60 -- duplicates matching table entries under a new key. */
typedef struct {
    int key;
    unsigned char b;
    int c;
    float d;
    int e;
    int f;
} E;
extern unsigned D_001F6118;
extern E D_0023A4B0[];

void func_079C60(int a, int b)
{
    unsigned i;
    if (D_001F6118 < 16) {
        for (i = 0; i < D_001F6118; i++) {
            if (D_0023A4B0[i].key == b) {
                D_0023A4B0[D_001F6118].key = a;
                D_0023A4B0[D_001F6118].b = D_0023A4B0[i].b;
                D_0023A4B0[D_001F6118].c = D_0023A4B0[i].c;
                D_0023A4B0[D_001F6118].d = D_0023A4B0[i].d;
                D_0023A4B0[D_001F6118].e = D_0023A4B0[i].e;
                D_0023A4B0[D_001F6118].f = D_0023A4B0[i].f;
                D_001F6118++;
            }
        }
    }
}
