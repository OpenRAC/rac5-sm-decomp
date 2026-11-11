/* LEVEL_01:0x0C21B0 -- finds the current id in a 2x4 table, records its slot and fires events for every slot. */
extern int D_001FCA08;
extern int D_001FEE60;
extern int D_001FEE64;
extern int D_001FEEC8[2][4];
extern unsigned char D_001FEE6C;
extern void func_0AE658(int ev, int arg);
extern void func_0C1720(void);
extern void func_0C20D8(int x);

void func_0C21B0(void)
{
    unsigned i;
    unsigned j;
    int cur = D_001FCA08;
    int base;
    int *row;
    D_001FEE60 = -1;
    D_001FEE64 = -1;
    if (cur != 0) {
        for (i = 0; i < 2; i++) {
            row = D_001FEEC8[i];
            base = i * 4 + 0x3E8;
            for (j = 0; j < 4; j++) {
                if (D_001FCA08 == row[j]) {
                    D_001FEE60 = j;
                    D_001FEE64 = i;
                }
                func_0AE658(j + base, 0);
            }
        }
    }
    func_0AE658(0x3DC, 0);
    D_001FEE6C = 0;
    func_0C1720();
    func_0C20D8(0);
}
