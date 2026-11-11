/* LEVEL_20:0x09BB98 -- placement copy of LEVEL_01_0C21B0.c: finds the current id in a 2x4 table, records its slot and fires events for every slot. */
extern int D_0010D168;
extern int D_0010F5B8;
extern int D_0010F5BC;
extern int D_0010F620[2][4];
extern unsigned char D_0010F5C4;
extern void func_087440(int ev, int arg);
extern void func_09B108(void);
extern void func_09BAC0(int x);

void func_09BB98(void)
{
    unsigned i;
    unsigned j;
    int cur = D_0010D168;
    int base;
    int *row;
    D_0010F5B8 = -1;
    D_0010F5BC = -1;
    if (cur != 0) {
        for (i = 0; i < 2; i++) {
            row = D_0010F620[i];
            base = i * 4 + 0x3E8;
            for (j = 0; j < 4; j++) {
                if (D_0010D168 == row[j]) {
                    D_0010F5B8 = j;
                    D_0010F5BC = i;
                }
                func_087440(j + base, 0);
            }
        }
    }
    func_087440(0x3DC, 0);
    D_0010F5C4 = 0;
    func_09B108();
    func_09BAC0(0);
}
