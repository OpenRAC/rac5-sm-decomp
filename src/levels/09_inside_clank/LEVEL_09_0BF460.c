/* LEVEL_09:0x0BF460 -- placement copy of LEVEL_01_0C21B0.c: finds the current id in a 2x4 table, records its slot and fires events for every slot. */
extern int D_001E6808;
extern int D_001E8C60;
extern int D_001E8C64;
extern int D_001E8CC8[2][4];
extern unsigned char D_001E8C6C;
extern void func_0AB908(int ev, int arg);
extern void func_0BE9D0(void);
extern void func_0BF388(int x);

void func_0BF460(void)
{
    unsigned i;
    unsigned j;
    int cur = D_001E6808;
    int base;
    int *row;
    D_001E8C60 = -1;
    D_001E8C64 = -1;
    if (cur != 0) {
        for (i = 0; i < 2; i++) {
            row = D_001E8CC8[i];
            base = i * 4 + 0x3E8;
            for (j = 0; j < 4; j++) {
                if (D_001E6808 == row[j]) {
                    D_001E8C60 = j;
                    D_001E8C64 = i;
                }
                func_0AB908(j + base, 0);
            }
        }
    }
    func_0AB908(0x3DC, 0);
    D_001E8C6C = 0;
    func_0BE9D0();
    func_0BF388(0);
}
