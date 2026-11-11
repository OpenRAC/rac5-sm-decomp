/* LEVEL_24:0x0743C8 -- placement copy of LEVEL_01_079C60.c: duplicates matching table entries under a new key. */
typedef struct {
    int key;
    unsigned char b;
    int c;
    float d;
    int e;
    int f;
} E;
extern unsigned D_001C6D98;
extern E D_002063B0[];

void func_0743C8(int a, int b)
{
    unsigned i;
    if (D_001C6D98 < 16) {
        for (i = 0; i < D_001C6D98; i++) {
            if (D_002063B0[i].key == b) {
                D_002063B0[D_001C6D98].key = a;
                D_002063B0[D_001C6D98].b = D_002063B0[i].b;
                D_002063B0[D_001C6D98].c = D_002063B0[i].c;
                D_002063B0[D_001C6D98].d = D_002063B0[i].d;
                D_002063B0[D_001C6D98].e = D_002063B0[i].e;
                D_002063B0[D_001C6D98].f = D_002063B0[i].f;
                D_001C6D98++;
            }
        }
    }
}
