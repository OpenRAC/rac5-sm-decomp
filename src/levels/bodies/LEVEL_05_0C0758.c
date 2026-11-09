/* LEVEL_05:0x0C0758 -- placement copy of LEVEL_01_0C21B0.c: finds the current id in a 2x4 table, records its slot and fires events for every slot. */
extern int D_001EBD88;
extern int D_001EE1E0;
extern int D_001EE1E4;
extern int D_001EE248[2][4];
extern unsigned char D_001EE1EC;
extern void func_0ACC18(int ev, int arg);
extern void func_0BFCC8(void);
extern void func_0C0680(int x);

void func_0C0758(void)
{
    unsigned i;
    unsigned j;
    int cur = D_001EBD88;
    int base;
    int *row;
    D_001EE1E0 = -1;
    D_001EE1E4 = -1;
    if (cur != 0) {
        for (i = 0; i < 2; i++) {
            row = D_001EE248[i];
            base = i * 4 + 0x3E8;
            for (j = 0; j < 4; j++) {
                if (D_001EBD88 == row[j]) {
                    D_001EE1E0 = j;
                    D_001EE1E4 = i;
                }
                func_0ACC18(j + base, 0);
            }
        }
    }
    func_0ACC18(0x3DC, 0);
    D_001EE1EC = 0;
    func_0BFCC8();
    func_0C0680(0);
}
