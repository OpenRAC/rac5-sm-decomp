/* LEVEL_02:0x080548 -- placement copy of LEVEL_01_079C60.c: duplicates matching table entries under a new key. */
typedef struct {
    int key;
    unsigned char b;
    int c;
    float d;
    int e;
    int f;
} E;
extern unsigned D_0020B0D8;
extern E D_002519C0[];

void func_080548(int a, int b)
{
    unsigned i;
    if (D_0020B0D8 < 16) {
        for (i = 0; i < D_0020B0D8; i++) {
            if (D_002519C0[i].key == b) {
                D_002519C0[D_0020B0D8].key = a;
                D_002519C0[D_0020B0D8].b = D_002519C0[i].b;
                D_002519C0[D_0020B0D8].c = D_002519C0[i].c;
                D_002519C0[D_0020B0D8].d = D_002519C0[i].d;
                D_002519C0[D_0020B0D8].e = D_002519C0[i].e;
                D_002519C0[D_0020B0D8].f = D_002519C0[i].f;
                D_0020B0D8++;
            }
        }
    }
}
