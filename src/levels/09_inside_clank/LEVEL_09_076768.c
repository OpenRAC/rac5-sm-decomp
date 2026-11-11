/* LEVEL_09:0x076768 -- placement copy of LEVEL_01_079C60.c: duplicates matching table entries under a new key. */
typedef struct {
    int key;
    unsigned char b;
    int c;
    float d;
    int e;
    int f;
} E;
extern unsigned D_001DFF18;
extern E D_00221C30[];

void func_076768(int a, int b)
{
    unsigned i;
    if (D_001DFF18 < 16) {
        for (i = 0; i < D_001DFF18; i++) {
            if (D_00221C30[i].key == b) {
                D_00221C30[D_001DFF18].key = a;
                D_00221C30[D_001DFF18].b = D_00221C30[i].b;
                D_00221C30[D_001DFF18].c = D_00221C30[i].c;
                D_00221C30[D_001DFF18].d = D_00221C30[i].d;
                D_00221C30[D_001DFF18].e = D_00221C30[i].e;
                D_00221C30[D_001DFF18].f = D_00221C30[i].f;
                D_001DFF18++;
            }
        }
    }
}
