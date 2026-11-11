/* LEVEL_02:0x0C8AC0 -- placement copy of LEVEL_01_0C21B0.c: finds the current id in a 2x4 table, records its slot and fires events for every slot. */
extern int D_002119C8;
extern int D_00213E20;
extern int D_00213E24;
extern int D_00213E88[2][4];
extern unsigned char D_00213E2C;
extern void func_0B4F68(int ev, int arg);
extern void func_0C8030(void);
extern void func_0C89E8(int x);

void func_0C8AC0(void)
{
    unsigned i;
    unsigned j;
    int cur = D_002119C8;
    int base;
    int *row;
    D_00213E20 = -1;
    D_00213E24 = -1;
    if (cur != 0) {
        for (i = 0; i < 2; i++) {
            row = D_00213E88[i];
            base = i * 4 + 0x3E8;
            for (j = 0; j < 4; j++) {
                if (D_002119C8 == row[j]) {
                    D_00213E20 = j;
                    D_00213E24 = i;
                }
                func_0B4F68(j + base, 0);
            }
        }
    }
    func_0B4F68(0x3DC, 0);
    D_00213E2C = 0;
    func_0C8030();
    func_0C89E8(0);
}
