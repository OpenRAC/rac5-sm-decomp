/* SpiralSphere_RegisterSystem__F10DRAW_Layeri15DRAW_ZWriteMode17DRAW_ColorKeyM
 * ode14DRAW_BloomMode14DRAW_BlendMode 0x01E761F8 (14 November 2026).
 * Measured prodg2953: 2 differing words; first difference at 0x44.
 * Recover the observed types, statement order and lifetimes before retrying.
 * No matching credit.
 */
extern void par_update_01E75698(void);
extern int PAR_CreateSystemInternal__FP10PAR_SystemUiPFPviPC9PAR_GroupPC29PAR_UpdateAndTesselateContext_iiiiPFP9PAR_Group_v(
    void *, unsigned int, void *, int, int, int, int);
extern unsigned int PAR_RegisterSystem__FPC10PAR_System(void *);

unsigned int SpiralSphere_RegisterSystem__F10DRAW_Layeri15DRAW_ZWriteMode17DRAW_ColorKeyMode14DRAW_BloomMode14DRAW_BlendMode(int layer, int count, int zwrite, int color_key, int bloom, int blend) {
    char system[0x10];
    unsigned int flags;

    unsigned int mid = (bloom << 10) | 0x3000;

    flags = (layer << 27) | (count << 16) | (zwrite << 15) | (color_key << 14) | mid | (blend << 6) | 0x21;
    PAR_CreateSystemInternal__FP10PAR_SystemUiPFPviPC9PAR_GroupPC29PAR_UpdateAndTesselateContext_iiiiPFP9PAR_Group_v(
        system, flags, par_update_01E75698, 0x14, 0, -1, 0);
    return PAR_RegisterSystem__FPC10PAR_System(system);
}
