/* 0x01E761F8 -- packs six bit fields into one flag word and passes it with a local buffer to the particle system creation and registration helpers. Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_1AF2E8.c (func_1AF2E8). */

extern void PAR_CreateSystemInternal__FP10PAR_SystemUiPFPviPC9PAR_GroupPC29PAR_UpdateAndTesselateContext_iiiiPFP9PAR_Group_v(unsigned int *record, unsigned int first, unsigned int second, int third, int fourth, int fifth, unsigned int sixth);
extern void PAR_RegisterSystem__FPC10PAR_System(void *buf);
extern unsigned char D_01E75698[];

void SpiralSphere_RegisterSystem__F10DRAW_Layeri15DRAW_ZWriteMode17DRAW_ColorKeyMode14DRAW_BloomMode14DRAW_BlendMode(unsigned int p0, unsigned int p1, unsigned int p2, unsigned int p3, unsigned int p4, unsigned int p5)
{
    unsigned int buf[4];
    unsigned int flags;
    unsigned int t;

    flags = p0 << 27;
    flags |= p1 << 16;
    flags |= p2 << 15;
    flags |= p3 << 14;
    t = (p4 << 10) | 0x3000;
    flags |= t;
    flags |= p5 << 6;
    PAR_CreateSystemInternal__FP10PAR_SystemUiPFPviPC9PAR_GroupPC29PAR_UpdateAndTesselateContext_iiiiPFP9PAR_Group_v(buf, flags | 0x21, (unsigned int)D_01E75698, 20, 0, -1, 0);
    PAR_RegisterSystem__FPC10PAR_System(buf);
}
