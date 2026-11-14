/* LEVEL_18:0x0B6068 -- placement copy of LEVEL_01_0C8420.c: applies one of two settings depending on the aspect-ratio id, recording the fallback mode otherwise. */
extern int D_001B0104;
extern int D_001B010C;
extern void func_110A60(int *p, int a1);

void func_0B6068(int *p)
{
    if (D_001B0104 == 1) {
        func_110A60(p, 0x1D);
    } else {
        D_001B010C = 0x12;
        func_110A60(p, 0x13);
    }
}
