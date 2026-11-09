/* LEVEL_08:0x0814E8 -- placement copy of LEVEL_01_079C60.c: duplicates matching table entries under a new key. */
typedef struct {
    int key;
    unsigned char b;
    int c;
    float d;
    int e;
    int f;
} E;
extern unsigned D_0023EFD8;
extern E D_00289740[];

void func_0814E8(int a, int b)
{
    unsigned i;
    if (D_0023EFD8 < 16) {
        for (i = 0; i < D_0023EFD8; i++) {
            if (D_00289740[i].key == b) {
                D_00289740[D_0023EFD8].key = a;
                D_00289740[D_0023EFD8].b = D_00289740[i].b;
                D_00289740[D_0023EFD8].c = D_00289740[i].c;
                D_00289740[D_0023EFD8].d = D_00289740[i].d;
                D_00289740[D_0023EFD8].e = D_00289740[i].e;
                D_00289740[D_0023EFD8].f = D_00289740[i].f;
                D_0023EFD8++;
            }
        }
    }
}
