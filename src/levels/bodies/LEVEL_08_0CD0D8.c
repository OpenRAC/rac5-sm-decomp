/* LEVEL_08:0x0CD0D8 -- placement copy of LEVEL_01_0C21B0.c: finds the current id in a 2x4 table, records its slot and fires events for every slot. */
extern int D_002458C8;
extern int D_00247D20;
extern int D_00247D24;
extern int D_00247D88[2][4];
extern unsigned char D_00247D2C;
extern void func_0B8F90(int ev, int arg);
extern void func_0CC648(void);
extern void func_0CD000(int x);

void func_0CD0D8(void)
{
    unsigned i;
    unsigned j;
    int cur = D_002458C8;
    int base;
    int *row;
    D_00247D20 = -1;
    D_00247D24 = -1;
    if (cur != 0) {
        for (i = 0; i < 2; i++) {
            row = D_00247D88[i];
            base = i * 4 + 0x3E8;
            for (j = 0; j < 4; j++) {
                if (D_002458C8 == row[j]) {
                    D_00247D20 = j;
                    D_00247D24 = i;
                }
                func_0B8F90(j + base, 0);
            }
        }
    }
    func_0B8F90(0x3DC, 0);
    D_00247D2C = 0;
    func_0CC648();
    func_0CD000(0);
}
