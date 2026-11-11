/* LEVEL_22:0x000E08 -- placement copy of LEVEL_01_001000.c. */
extern char D_0017D4E0[];
extern int D_0014E5C8;

void CAMERA_SetCurrentCamera__FUi(unsigned int i)
{
    D_0014E5C8 = (int)(D_0017D4E0 + i * 0x118);
}
