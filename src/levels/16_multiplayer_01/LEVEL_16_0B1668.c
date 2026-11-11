/* LEVEL_16:0x0B1668 -- placement copy of LEVEL_01_0C21B0.c: finds the current id in a 2x4 table, records its slot and fires events for every slot. */
extern int D_001AAA88;
extern int D_001ACED8;
extern int D_001ACEDC;
extern int D_001ACF40[2][4];
extern unsigned char D_001ACEE4;
extern void func_09CD48(int ev, int arg);
extern void func_0B0BD8(void);
extern void func_0B1590(int x);

void func_0B1668(void)
{
    unsigned i;
    unsigned j;
    int cur = D_001AAA88;
    int base;
    int *row;
    D_001ACED8 = -1;
    D_001ACEDC = -1;
    if (cur != 0) {
        for (i = 0; i < 2; i++) {
            row = D_001ACF40[i];
            base = i * 4 + 0x3E8;
            for (j = 0; j < 4; j++) {
                if (D_001AAA88 == row[j]) {
                    D_001ACED8 = j;
                    D_001ACEDC = i;
                }
                func_09CD48(j + base, 0);
            }
        }
    }
    func_09CD48(0x3DC, 0);
    D_001ACEE4 = 0;
    func_0B0BD8();
    func_0B1590(0);
}
