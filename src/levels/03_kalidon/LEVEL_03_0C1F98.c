/* LEVEL_03:0x0C1F98 -- placement copy of LEVEL_01_0C21B0.c: finds the current id in a 2x4 table, records its slot and fires events for every slot. */
extern int D_00215088;
extern int D_002174E0;
extern int D_002174E4;
extern int D_00217548[2][4];
extern unsigned char D_002174EC;
extern void func_0AE3D8(int ev, int arg);
extern void func_0C1508(void);
extern void func_0C1EC0(int x);

void func_0C1F98(void)
{
    unsigned i;
    unsigned j;
    int cur = D_00215088;
    int base;
    int *row;
    D_002174E0 = -1;
    D_002174E4 = -1;
    if (cur != 0) {
        for (i = 0; i < 2; i++) {
            row = D_00217548[i];
            base = i * 4 + 0x3E8;
            for (j = 0; j < 4; j++) {
                if (D_00215088 == row[j]) {
                    D_002174E0 = j;
                    D_002174E4 = i;
                }
                func_0AE3D8(j + base, 0);
            }
        }
    }
    func_0AE3D8(0x3DC, 0);
    D_002174EC = 0;
    func_0C1508();
    func_0C1EC0(0);
}
