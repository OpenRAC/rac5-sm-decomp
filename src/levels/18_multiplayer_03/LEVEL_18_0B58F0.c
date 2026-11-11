/* LEVEL_18:0x0B58F0 -- placement copy of LEVEL_01_0C7CA8.c: applies one of two settings to a value depending on the aspect-ratio id. */
extern int D_001B0104;
extern void func_110A60(int *p, int a1);

void func_0B58F0(int *p)
{
    if (D_001B0104 == 1) {
        func_110A60(p, 0x1D);
    } else {
        func_110A60(p, 0x1F);
    }
}
