typedef struct {
    float x;
    float y;
    float z;
} VEC3;

typedef struct {
    float m[12];
} MATRIX4N30;

extern float g_MasterVolume;   /* 0x01EF69A4 */
extern float g_SoundVolume;    /* 0x01EF69AC */
extern float g_SoundScale;     /* 0x01EF69A8 */
extern VEC3 g_CameraPos0;      /* 0x01FD1920 */
extern VEC3 g_CameraPos1;      /* 0x01FD1970 */
extern MATRIX4N30 g_CameraInv0; /* 0x01FD18E0 */
extern MATRIX4N30 g_CameraInv1; /* 0x01FD1930 */

extern void snd_SetMasterVolume(int bus, int volume);
extern void VEC_InverseMat4__FP7MATRIX4PC7MATRIX4(MATRIX4N30 *out,
                                                 const MATRIX4N30 *in);
extern void SND_UpdateStandard__Fv(void);
extern void snd_FlushSoundCommands(void);

int SND_Update__FPC7MATRIX4N30(const MATRIX4N30 *camera,
                               const MATRIX4N30 *cameraInverse,
                               const VEC3 *position0,
                               const VEC3 *position1) {
    snd_SetMasterVolume(1, (int)(g_MasterVolume * 1024.0f));
    snd_SetMasterVolume(2, (int)(g_SoundVolume * g_SoundScale));
    if (camera)
        g_CameraPos0 = *(const VEC3 *)((const char *)camera + 0x30);
    if (cameraInverse)
        VEC_InverseMat4__FP7MATRIX4PC7MATRIX4(&g_CameraInv0, cameraInverse);
    if (camera)
        g_CameraPos1 = *(const VEC3 *)((const char *)position0 + 0x30);
    if (cameraInverse)
        VEC_InverseMat4__FP7MATRIX4PC7MATRIX4(&g_CameraInv1, position1);
    SND_UpdateStandard__Fv();
    snd_FlushSoundCommands();
    return 1;
}
