/* LEVEL_24:0x0D0688 -- placement copy of FRONTEND_013EC0.c: clears several status words and, when a handle is set and the argument is zero, calls a helper with a fixed code before clearing the handle slot. */

extern int D_001D72E4;
extern int D_001D72F4;
extern int D_001D72D4;
extern unsigned char D_001D72FC;
extern int D_001D72F0;

extern int func_0AF8B0(int index);

void func_0D0688(int a0)
{
    int v;

    v = D_001D72E4;
    D_001D72F4 = 0;
    D_001D72D4 = 0;
    D_001D72FC = 0;
    if (v != 0 && a0 == 0) {
        func_0AF8B0(7);
    }
    D_001D72E4 = 0;
    D_001D72F0 = 0;
}
