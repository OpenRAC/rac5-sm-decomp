typedef struct {
    char pad[0x2DC];
    void *singlePlayer;
    signed char state2E0;
} tHeroSkin;

extern tHeroSkin heroskin;
extern void PS2HEAP_Free__FPv(void *);

void HEROSKIN_TermSinglePlayer__Fv(void) {
    if (heroskin.singlePlayer != 0) {
        PS2HEAP_Free__FPv(heroskin.singlePlayer);
        heroskin.singlePlayer = 0;
        heroskin.state2E0 = -1;
    }
}
