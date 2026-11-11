/* LEVEL_21:0x0A27F8 -- placement copy of LEVEL_01_0C21B0.c: finds the current id in a 2x4 table, records its slot and fires events for every slot. */
extern int D_00151688;
extern int D_00153AE0;
extern int D_00153AE4;
extern int D_00153B48[2][4];
extern unsigned char D_00153AEC;
extern void func_08EF20(int ev, int arg);
extern void func_0A1D68(void);
extern void func_0A2720(int x);

void func_0A27F8(void)
{
    unsigned i;
    unsigned j;
    int cur = D_00151688;
    int base;
    int *row;
    D_00153AE0 = -1;
    D_00153AE4 = -1;
    if (cur != 0) {
        for (i = 0; i < 2; i++) {
            row = D_00153B48[i];
            base = i * 4 + 0x3E8;
            for (j = 0; j < 4; j++) {
                if (D_00151688 == row[j]) {
                    D_00153AE0 = j;
                    D_00153AE4 = i;
                }
                func_08EF20(j + base, 0);
            }
        }
    }
    func_08EF20(0x3DC, 0);
    D_00153AEC = 0;
    func_0A1D68();
    func_0A2720(0);
}
