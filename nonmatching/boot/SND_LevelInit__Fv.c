extern int snd_state;
extern void SND_Init__Fv(void);

void SND_LevelInit__Fv(void) {
    if (snd_state != 0) __asm__ __volatile__("break 0,1\n\tnop");
    snd_state = 2;
    SND_Init__Fv();
}
