/*
 * Symbol:  SND_Update__FPC7MATRIX4T0
 * Address: 0x01E913E0
 * Body:    240 bytes
 *
 * Per-frame sound update: pushes the two master volumes to the sound driver,
 * copies the listener position, inverts the view matrix into the listener
 * matrix, marks the sound state as updating, runs the per-voice update over
 * the 64 positional sounds, updates ATRAC and flushes the sound commands.
 *
 * Profile: pinned chain (cpp, cc1 -quiet -O2 -G0, as) built by
 * tools/compiler/build_gnu_ee.sh.
 * Rebuilt binaries are not hash-identical to the pins.
 * Measured: 240/240 matched bytes (full body, relocations resolved at the
 * retail addresses), 1 compile; pre-screen only, not run through the official gate.
 * Exact but unaccepted witness (USA boot, SCUS_976.15). Missing: the campaign
 * integration and the qualifying gate with pinned tools, and names for the
 * unnamed data (D_01FD1920 is the listener position, D_01FD18E0 the listener
 * matrix, D_01FD1980 the sound update state).
 */
typedef struct {
    float x;
    float y;
    float z;
} VEC3;

typedef struct {
    float m[12];
    VEC3 translation;
    float w;
} MATRIX4;

typedef struct {
    char _bytes[0x58];
} SND_Positional;

extern float g_music_volume;
extern float g_vo_volume;
extern float g_vo_vol_range;
extern VEC3 D_01FD1920;
extern MATRIX4 D_01FD18E0;
extern int D_01FD1980;
extern SND_Positional gSounds[];

extern void snd_SetMasterVolume(int id, int volume);
extern void VEC_InverseMat4__FP7MATRIX4PC7MATRIX4(MATRIX4 *dst, const MATRIX4 *src);
extern void func_1E92B40(SND_Positional *sound);
extern void SND_UpdateATRAC__Fv(void);
extern int snd_FlushSoundCommands(void);

int SND_Update__FPC7MATRIX4T0(const MATRIX4 *listener, const MATRIX4 *view) {
    int i;

    snd_SetMasterVolume(1, (int)(g_music_volume * 1024.0f));
    snd_SetMasterVolume(2, (int)(g_vo_vol_range * g_vo_volume));
    if (listener != 0) {
        D_01FD1920 = listener->translation;
    }
    if (view != 0) {
        VEC_InverseMat4__FP7MATRIX4PC7MATRIX4(&D_01FD18E0, view);
    }
    D_01FD1980 = 1;
    for (i = 0; i < 64; i++)
        func_1E92B40(&gSounds[i]);
    SND_UpdateATRAC__Fv();
    snd_FlushSoundCommands();
    return 1;
}
