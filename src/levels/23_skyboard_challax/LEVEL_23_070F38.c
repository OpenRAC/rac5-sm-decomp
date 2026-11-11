/* LEVEL_23:0x070F38 -- placement copy of LEVEL_01_079C60.c: duplicates matching table entries under a new key. */
typedef struct {
    int key;
    unsigned char b;
    int c;
    float d;
    int e;
    int f;
} E;
extern unsigned D_001C9518;
extern E D_00207930[];

void func_070F38(int a, int b)
{
    unsigned i;
    if (D_001C9518 < 16) {
        for (i = 0; i < D_001C9518; i++) {
            if (D_00207930[i].key == b) {
                D_00207930[D_001C9518].key = a;
                D_00207930[D_001C9518].b = D_00207930[i].b;
                D_00207930[D_001C9518].c = D_00207930[i].c;
                D_00207930[D_001C9518].d = D_00207930[i].d;
                D_00207930[D_001C9518].e = D_00207930[i].e;
                D_00207930[D_001C9518].f = D_00207930[i].f;
                D_001C9518++;
            }
        }
    }
}
