/* ClankTransExhaust_RegisterParticleSystem__Fi10DRAW_Layer17DRAW_ColorKeyMode1
 * 7DRAW_AlphaKeyMode14DRAW_BloomMode14DRAW_BlendMode 0x01E72008 (14 November
 * 2026).
 * Measured prodg2953: 2 differing words; first difference at 0x40.
 * Recover the observed types, statement order and lifetimes before retrying.
 * No matching credit.
 */
typedef struct {
    float x;
    float y;
    float z;
    float w;
} tVec4;

extern void par_update_01E70F98(void);
extern tVec4 D_01F67DC8;
extern int PAR_CreateSystemInternal__FP10PAR_SystemUiPFPviPC9PAR_GroupPC29PAR_UpdateAndTesselateContext_iiiiPFP9PAR_Group_v(
    void *, unsigned int, void *, int, int, int, int);
extern unsigned int PAR_RegisterSystem__FPC10PAR_System(void *);

void ClankTransExhaust_RegisterParticleSystem__Fi10DRAW_Layer17DRAW_ColorKeyMode17DRAW_AlphaKeyMode14DRAW_BloomMode14DRAW_BlendMode(int count, int layer, int color_key, int alpha_key, int bloom, int blend) {
    char system[0x10];
    unsigned int flags;
    unsigned int mid = (bloom << 10) | 0x1000;

    flags = (layer << 27) | (count << 16) | (color_key << 14) | (alpha_key << 13) | mid | (blend << 6) | 5;
    PAR_CreateSystemInternal__FP10PAR_SystemUiPFPviPC9PAR_GroupPC29PAR_UpdateAndTesselateContext_iiiiPFP9PAR_Group_v(
        system, flags, par_update_01E70F98, 0x44, 0, -1, 0);
    PAR_RegisterSystem__FPC10PAR_System(system);
}

void static_init_01E72078(int initialize, unsigned int priority) {
    if (priority == 0xFFFF) {
        if (initialize != 0) {
            D_01F67DC8.x = 0;
            D_01F67DC8.y = 0;
            D_01F67DC8.z = 0;
            D_01F67DC8.w = 1.0f;
        }
    }
}
