typedef struct {
    float m[4][4];
} MATRIX4;

extern int snd_state;
extern void SND_Update__FPC7MATRIX4T0(const MATRIX4 *a, const MATRIX4 *b);

void SND_LevelUpdate__FPC7MATRIX4T0(const MATRIX4 *a, const MATRIX4 *b) {
    if (snd_state != 2) __asm__ __volatile__("break 0,1\n\tnop");
    SND_Update__FPC7MATRIX4T0(a, b);
}
