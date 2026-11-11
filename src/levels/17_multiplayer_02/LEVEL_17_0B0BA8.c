/* LEVEL_17:0x0B0BA8 -- placement copy of LEVEL_01_0C21B0.c: finds the current id in a 2x4 table, records its slot and fires events for every slot. */
extern int D_0019E088;
extern int D_001A04D8;
extern int D_001A04DC;
extern int D_001A0540[2][4];
extern unsigned char D_001A04E4;
extern void func_09C240(int ev, int arg);
extern void func_0B0118(void);
extern void func_0B0AD0(int x);

void func_0B0BA8(void)
{
    unsigned i;
    unsigned j;
    int cur = D_0019E088;
    int base;
    int *row;
    D_001A04D8 = -1;
    D_001A04DC = -1;
    if (cur != 0) {
        for (i = 0; i < 2; i++) {
            row = D_001A0540[i];
            base = i * 4 + 0x3E8;
            for (j = 0; j < 4; j++) {
                if (D_0019E088 == row[j]) {
                    D_001A04D8 = j;
                    D_001A04DC = i;
                }
                func_09C240(j + base, 0);
            }
        }
    }
    func_09C240(0x3DC, 0);
    D_001A04E4 = 0;
    func_0B0118();
    func_0B0AD0(0);
}
