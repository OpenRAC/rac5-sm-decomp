/* LEVEL_22:0x0B8268 -- records the mode, starts the shared sequence with it, resets the progress words and picks the follow-up cue depending on the active slot. */
extern int D_001605CC;
extern int D_001605D4;
extern char D_001605D8;
extern void func_0C5490(int a, int b, int c, int d);
extern void func_0C54C8(int a);
extern int func_016E80(int value);
extern int func_0AA1D8(void);
extern int func_0AAF30(int a0);
extern int func_0AA8A8(int a, int b);

void func_0B8268(int mode, int arg)
{
    D_001605CC = mode;
    func_0C5490(1, mode, arg, 0);
    D_001605D4 = 1;
    D_001605D8 = 0;
    func_0C54C8(10);
    if (func_016E80(6) != 0) {
        if ((func_0AA1D8() ^ 0x25) != 0) {
            func_0AAF30(0x25);
        }
    } else {
        func_0AA8A8(0x25, 0);
    }
}
