/* LEVEL_01:0x168A08 -- lazily creates the six cached handles. */

extern int D_0020766C;
extern int D_00207670;
extern int D_00207674;
extern int D_00207678;
extern int D_0020767C;
extern int D_00207680;
extern int D_00297E20;
extern int D_00297DFC;
extern int D_00297DE8;
extern int D_00297EB0;

int func_109DB8(int key);
int func_0FCB00(int key);

void func_168A08(void)
{
    if (D_0020766C == -1) {
        D_0020766C = func_109DB8((D_00297E20 << 16) | 0x800030C5);
    }
    if (D_00207670 == -1) {
        D_00207670 = func_109DB8((D_00297DFC << 16) | 0x80003045);
    }
    if (D_00207674 == -1) {
        D_00207674 = func_109DB8((D_00297DE8 << 16) | 0x800030C5);
    }
    if (D_00207678 == -1) {
        D_00207678 = func_109DB8((D_00297DE8 << 16) | 0x88003045);
    }
    if (D_0020767C == -1) {
        D_0020767C = func_109DB8((D_00297EB0 << 16) | 0x90003045);
    }
    if (D_00207680 == -1) {
        D_00207680 = func_0FCB00((D_00297EB0 << 16) | 0x90003045);
    }
}
