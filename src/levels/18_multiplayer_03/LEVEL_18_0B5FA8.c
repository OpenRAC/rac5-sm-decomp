/* LEVEL_18:0x0B5FA8 -- placement copy of LEVEL_01_0C8360.c: applies one of two settings to a value depending on the aspect-ratio id, remembering the second choice in a global. */
extern int D_001B0104;
extern int D_001B010C;
extern void func_110A60(int *p, int a1);

void func_0B5FA8(int *p)
{
    if (D_001B0104 == 1) {
        func_110A60(p, 0x1D);
    } else {
        D_001B010C = 0x11;
        func_110A60(p, 0x13);
    }
}
