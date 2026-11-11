/* LEVEL_06:0x0BCAB0 -- placement copy of LEVEL_01_0C21B0.c: finds the current id in a 2x4 table, records its slot and fires events for every slot. */
extern int D_001EB908;
extern int D_001EDD60;
extern int D_001EDD64;
extern int D_001EDDC8[2][4];
extern unsigned char D_001EDD6C;
extern void func_0A8E28(int ev, int arg);
extern void func_0BC020(void);
extern void func_0BC9D8(int x);

void func_0BCAB0(void)
{
    unsigned i;
    unsigned j;
    int cur = D_001EB908;
    int base;
    int *row;
    D_001EDD60 = -1;
    D_001EDD64 = -1;
    if (cur != 0) {
        for (i = 0; i < 2; i++) {
            row = D_001EDDC8[i];
            base = i * 4 + 0x3E8;
            for (j = 0; j < 4; j++) {
                if (D_001EB908 == row[j]) {
                    D_001EDD60 = j;
                    D_001EDD64 = i;
                }
                func_0A8E28(j + base, 0);
            }
        }
    }
    func_0A8E28(0x3DC, 0);
    D_001EDD6C = 0;
    func_0BC020();
    func_0BC9D8(0);
}
