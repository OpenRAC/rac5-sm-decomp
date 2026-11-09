/* LEVEL_23:0x0B8F50 -- placement copy of LEVEL_01_0C21B0.c: finds the current id in a 2x4 table, records its slot and fires events for every slot. */
extern int D_001CFE08;
extern int D_001D2260;
extern int D_001D2264;
extern int D_001D22C8[2][4];
extern unsigned char D_001D226C;
extern void func_0A53C8(int ev, int arg);
extern void func_0B84C0(void);
extern void func_0B8E78(int x);

void func_0B8F50(void)
{
    unsigned i;
    unsigned j;
    int cur = D_001CFE08;
    int base;
    int *row;
    D_001D2260 = -1;
    D_001D2264 = -1;
    if (cur != 0) {
        for (i = 0; i < 2; i++) {
            row = D_001D22C8[i];
            base = i * 4 + 0x3E8;
            for (j = 0; j < 4; j++) {
                if (D_001CFE08 == row[j]) {
                    D_001D2260 = j;
                    D_001D2264 = i;
                }
                func_0A53C8(j + base, 0);
            }
        }
    }
    func_0A53C8(0x3DC, 0);
    D_001D226C = 0;
    func_0B84C0();
    func_0B8E78(0);
}
