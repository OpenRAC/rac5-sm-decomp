/* LEVEL_18:0x0B6380 -- placement copy of LEVEL_01_0C8738.c: applies one of two settings depending on the aspect-ratio id, recording the fallback mode otherwise. */
extern int D_001B0104;
extern int D_001B010C;
extern void func_110A60(int *p, int a1);

void func_0B6380(int *p)
{
    if (D_001B0104 == 1) {
        func_110A60(p, 1);
    } else {
        D_001B010C = 0x1D;
        func_110A60(p, 0x13);
    }
}
