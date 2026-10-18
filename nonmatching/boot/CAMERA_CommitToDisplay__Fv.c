/* w14/T01 — CAMERA_CommitToDisplay__Fv
 * Reconstructed from the retail disassembly: commit the camera matrices,
 * build the frustum and the screen matrix, then install it.
 */
typedef struct MATRIX4 { float m[16]; } MATRIX4;
typedef struct ClipPlanes ClipPlanes;

typedef struct tCAMERA {
    MATRIX4 matrix;            /* 0x00 */
    unsigned char pad0[0x80 - 0x40];
    float f80;                 /* 0x80 */
    float f84;                 /* 0x84 */
    float f88;                 /* 0x88 */
    float f8C;                 /* 0x8C */
    unsigned char pad1[0xF4 - 0x90];
    float fF4;                 /* 0xF4 */
    float fF8;                 /* 0xF8 */
    unsigned char pad2[0x10C - 0xFC];
    float f10C;                /* 0x10C */
    float f110;                /* 0x110 */
} tCAMERA;

extern tCAMERA *g_camera;      /* 0x01EDE330 */
extern MATRIX4 g_screenMatrix; /* 0x01F61B70 */

void DISPLAY_SetViewMatrixFromCameraMatrix(const MATRIX4 *matrix);
void DISPLAY_SetupProjection(float nearZ, float farZ, float fovy, float aspect);
void DISPLAY_CommitView(void);
void DISPLAY_BuildFrustumPlanes(MATRIX4 *matrix, int a, int b, int c);
void DISPLAY_SetVisibilityPlanes(ClipPlanes *planes);
void VRAM_SetViewport(int x, int y, int w, int h);
void VRAM_SetOffset(int x, int y);
void dlib_ms_screen_matrix(float *matrix, int a, int b, int c, int d,
                           int e, int f);
void MatrixMode(int mode);
void LoadMatrix(MATRIX4 *matrix);
void SYSTEM_UpdateMatricies(void);

void CAMERA_CommitToDisplay__Fv(void) {
    int ox;
    int oy;

    DISPLAY_SetViewMatrixFromCameraMatrix(&g_camera->matrix);
    DISPLAY_SetupProjection(g_camera->fF4, g_camera->fF8, g_camera->f10C,
                            g_camera->f110);
    DISPLAY_CommitView();
    DISPLAY_BuildFrustumPlanes(0, 0, 0, 0);
    DISPLAY_SetVisibilityPlanes(0);

    ox = (0x1000 - (int)g_camera->f88) / 2;
    oy = (0x1000 - (int)g_camera->f8C) / 2 - (int)g_camera->f84;
    VRAM_SetViewport(0x800, 0x800, (int)g_camera->f88, (int)g_camera->f8C);
    VRAM_SetOffset(ox, oy);

    dlib_ms_screen_matrix(g_screenMatrix.m, (int)g_camera->f80,
                          (int)g_camera->f84, (int)g_camera->f88,
                          (int)-g_camera->f8C, 0xFFFFFF, 0);
    MatrixMode(4);
    LoadMatrix(&g_screenMatrix);
    SYSTEM_UpdateMatricies();
}
