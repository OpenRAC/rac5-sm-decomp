/* LEVEL_02:0x0CE5B8 -- placement copy of LEVEL_01_0C7CA8.c: applies one of two settings to a value depending on the aspect-ratio id. */
extern int D_00215BCC;
extern void func_13BA90(int *p, int a1);

void func_0CE5B8(int *p)
{
    if (D_00215BCC == 1) {
        func_13BA90(p, 0x1D);
    } else {
        func_13BA90(p, 0x1F);
    }
}
