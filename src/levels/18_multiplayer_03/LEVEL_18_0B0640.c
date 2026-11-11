/* LEVEL_18:0x0B0640 -- placement copy of LEVEL_01_0C21B0.c: finds the current id in a 2x4 table, records its slot and fires events for every slot. */
extern int D_001ABF08;
extern int D_001AE358;
extern int D_001AE35C;
extern int D_001AE3C0[2][4];
extern unsigned char D_001AE364;
extern void func_09BD58(int ev, int arg);
extern void func_0AFBB0(void);
extern void func_0B0568(int x);

void func_0B0640(void)
{
    unsigned i;
    unsigned j;
    int cur = D_001ABF08;
    int base;
    int *row;
    D_001AE358 = -1;
    D_001AE35C = -1;
    if (cur != 0) {
        for (i = 0; i < 2; i++) {
            row = D_001AE3C0[i];
            base = i * 4 + 0x3E8;
            for (j = 0; j < 4; j++) {
                if (D_001ABF08 == row[j]) {
                    D_001AE358 = j;
                    D_001AE35C = i;
                }
                func_09BD58(j + base, 0);
            }
        }
    }
    func_09BD58(0x3DC, 0);
    D_001AE364 = 0;
    func_0AFBB0();
    func_0B0568(0);
}
