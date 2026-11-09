/* LEVEL_08:0x09CC48 -- placement copy of LEVEL_01_094D28.c: advances the effect timer and applies the screen effects for the current mode. */
extern float D_0023F310;
extern int D_0023F300[4];
extern int func_02A968(int mode);
extern void func_09C6E8(int x);
extern int rand(void);
extern unsigned char g_RENDEREFFECT_BLOOM_Intensity;
extern unsigned char g_RENDEREFFECT_BLOOM_bFullScreen;
extern unsigned char g_RENDEREFFECT_VIGNETTE_Intensity;
extern unsigned char g_RENDEREFFECT_COLORMUL_Enable;
extern int g_RENDEREFFECT_COLORMUL_Color;
extern void RENDEREFFECT_Bloom(unsigned char a, unsigned char b) __asm__("RENDEREFFECT_Bloom__FUcb");
extern void RENDEREFFECT_Vignette(unsigned char a) __asm__("RENDEREFFECT_Vignette__FUc");
extern void RENDEREFFECT_Color(unsigned a) __asm__("RENDEREFFECT_Color__FUi");
extern void RENDEREFFECT_DoFilmNoise(void) __asm__("RENDEREFFECT_DoFilmNoise__Fv");
extern void RENDEREFFECT_SwirlyEdgeBlur(float t) __asm__("RENDEREFFECT_SwirlyEdgeBlur__Ff");

void func_09CC48(float dt)
{
    D_0023F310 += dt;
    if (func_02A968(0xD)) {
        RENDEREFFECT_Bloom(1, 1);
    } else if (func_02A968(5)) {
        RENDEREFFECT_Bloom(1, 1);
        RENDEREFFECT_Vignette(0xDC);
        RENDEREFFECT_Color(D_0023F300[(rand() >> 4) % 4]);
        RENDEREFFECT_DoFilmNoise();
    } else {
        if (g_RENDEREFFECT_BLOOM_Intensity)
            RENDEREFFECT_Bloom(0x80, g_RENDEREFFECT_BLOOM_bFullScreen);
    }
    func_09C6E8(0);
    RENDEREFFECT_SwirlyEdgeBlur(D_0023F310);
    if (g_RENDEREFFECT_VIGNETTE_Intensity)
        RENDEREFFECT_Vignette(g_RENDEREFFECT_VIGNETTE_Intensity);
    if (g_RENDEREFFECT_COLORMUL_Enable)
        RENDEREFFECT_Color(g_RENDEREFFECT_COLORMUL_Color);
}
