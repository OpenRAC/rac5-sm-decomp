/* Candidate for the LEVEL_01 render setup body at 0x0C0F50.
 * The 64-byte values are matrices; the 20-byte records hold camera placement
 * and a branch selecting an additional quarter-turn.
 * Names with offsets are local symbols whose real names are not yet proven.
 */

typedef struct { float v[16]; } Matrix4;
typedef struct { float x, y, z; } Vec3;
typedef union {
    Matrix4 matrix;
    struct {
        Vec3 eye;
        float unused0;
        Vec3 target;
        float unused1;
        Vec3 up;
    } look;
    Vec3 scale;
} CameraScratch;
typedef struct {
    float a;
    float b;
    float scale;
    float d;
    unsigned char rotated;
    unsigned char pad[3];
} CameraRecord;
typedef struct {
    int unknown0;
    struct Screen *screen;
} Game;
typedef struct Screen {
    unsigned char pad[0x1c];
    void *camera;
    int device;
} Screen;

extern Game *D_00329008;
extern int D_001FEEE8, D_001FEEEC;
extern int D_001FEE58, D_001FEE5C;
extern CameraRecord D_001FEDB8[][4];
extern float D_001FEF1C, D_001FEF20, D_001FEF24, D_001FEF28, D_001FEF2C;
extern unsigned char D_001FEF18, D_001FEF30, D_001FEF31, D_001FEF32;
extern float D_001FEF00, D_001FEF04, D_001FEF08, D_001FEF0C, D_001FEF10, D_001FEF14;
extern float D_001FEEF0, D_001FEEF4, D_001FEEF8, D_001FEEFC;
extern void *D_001F3FAC;
extern void *D_0023B7E0;
extern Matrix4 D_00328FC8, D_00217DC0, D_00328F88;
extern unsigned char D_00329010;

extern void func_088F98(float, void *, int, int);
extern void func_08BC10(void);
extern void func_08A060(int);
extern void func_08BC60(void);
extern void func_0A0BC0(int);
extern void func_0A0A80(int, int);
extern void func_0A0A88(int, int);
extern void func_0A0A90(int, int);
extern void func_0A0908(int);
extern void func_0A0BA8(int, int, int);
extern void func_0A0BC8(int, int, int, int, int);
extern void func_0A1FF0(int, int, int);
extern void func_0A2110(int, int);
extern void func_0A2468(int);
extern void func_0A2618(int);
extern void func_0A53C0(int, int, int, int, int, int);
extern void func_123E80(Matrix4 *);
extern void func_123F10(float, Matrix4 *);
extern void func_125128(Matrix4 *, Matrix4 *, Matrix4 *);
extern void func_08C960(void);
extern void func_0A0AA0(float, float);
extern void func_088350(float, float, float, Screen *, void *, int, int, int, int, int, int);
extern float sqrtf(float);
extern void *memset(void *, int, unsigned long);

extern void MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType(int);
extern void PushMatrix__Q34scee3Psp3Gumv(void);
extern void PopMatrix__Q34scee3Psp3Gumv(void);
extern void UpdateMatrix__Q34scee3Psp3Gumv(void);
extern void LoadMatrix__Q34scee3Psp3GumPC7MATRIX4(Matrix4 *);
extern void LoadIdentity__Q34scee3Psp3Gumv(void);
extern void LookAt__Q34scee3Psp3GumPC14ScePspFVector3N21(Vec3 *, Vec3 *, Vec3 *);
extern void Ortho__Q34scee3Psp3Gumffffff(float, float, float, float, float, float);
extern void StoreMatrix__Q34scee3Psp3GumP14ScePspFMatrix4(Matrix4 *);
extern void Perspective__Q34scee3Psp3Gumffff(float, float, float, float);
extern void Scale__Q34scee3Psp3GumPC14ScePspFVector3(Vec3 *);

void func_0C0F50(void)
{
    Matrix4 model;
    CameraScratch scratch;
    Matrix4 projection;
    Matrix4 rotation;
    Matrix4 quarter_turn;
    CameraRecord *record;
    Screen *screen;
    void *camera;
    float length;
    float zoom;
    float record_scale;

    if (D_00329008 == 0 || (D_001FEEE8 == 0 && D_001FEEEC == 0))
        return;

    func_088F98(0.033333335f, &D_00329010, 0, 0);
    func_08BC10();
    func_08A060(D_00329008->screen->device);
    func_08BC60();
    func_0A0BC0(0);
    func_0A0A80(1, 1);
    func_0A0A88(0, 1);
    func_0A0A90(0, 0);
    func_0A0908(9);
    func_0A0908(4);
    func_0A0908(0);
    func_0A0BA8(6, 0, 255);
    func_0A0BC8(0, 2, 3, 0, 0);
    if (D_001FEF18) {
        func_0A1FF0(1, 0, 1);
        func_0A2110(1, 1);
        func_0A2468(1);
        func_0A2618(1);
        func_0A53C0(240, 0, 240, 272, 0xFF0000, 0);
        func_0A2110(1, 2);
    }

    MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType(2);
    PushMatrix__Q34scee3Psp3Gumv();
    record = &D_001FEDB8[D_001FEE5C][D_001FEE58];
    model = D_00328FC8;
    scratch.matrix = D_00217DC0;
    projection = D_00217DC0;
    D_001FEF20 += D_001FEF1C;
    model = D_00217DC0;
    scratch.matrix.v[12] = record->b;
    scratch.matrix.v[13] = record->d;
    scratch.matrix.v[14] = D_001FEF28;
    projection.v[12] = record->a;
    projection.v[13] = record->scale;
    projection.v[14] = D_001FEF2C;

    if (record->rotated) {
        func_123E80(&rotation);
        func_123F10(1.57079637f, &quarter_turn);
        func_125128(&model, &model, &scratch.matrix);
        func_125128(&model, &model, &quarter_turn);
        func_125128(&model, &model, &rotation);
    } else {
        func_123E80(&rotation);
        func_125128(&model, &model, &scratch.matrix);
        func_125128(&model, &model, &rotation);
    }
    func_125128(&model, &model, &projection);
    LoadMatrix__Q34scee3Psp3GumPC7MATRIX4(&model);

    MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType(1);
    PushMatrix__Q34scee3Psp3Gumv();
    LoadIdentity__Q34scee3Psp3Gumv();
    scratch.look.eye.x = 0.0f; scratch.look.eye.y = 0.0f; scratch.look.eye.z = 4.0f;
    scratch.look.target.x = 0.0f; scratch.look.target.y = 0.0f; scratch.look.target.z = 0.0f;
    scratch.look.up.x = 0.0f; scratch.look.up.y = 1.0f; scratch.look.up.z = 0.0f;
    LookAt__Q34scee3Psp3GumPC14ScePspFVector3N21(&scratch.look.eye, &scratch.look.target, &scratch.look.up);

    if (D_001FEF30) {
        MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType(0);
        PushMatrix__Q34scee3Psp3Gumv();
        LoadIdentity__Q34scee3Psp3Gumv();
        if (D_001FEF31)
            Ortho__Q34scee3Psp3Gumffffff(D_001FEF00, D_001FEF04, D_001FEF08,
                                          D_001FEF0C, D_001FEF10, D_001FEF14);
        StoreMatrix__Q34scee3Psp3GumP14ScePspFMatrix4(&D_00328F88);
    }
    if (D_001FEF32 && !D_001FEF30) {
        MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType(0);
        PushMatrix__Q34scee3Psp3Gumv();
        LoadIdentity__Q34scee3Psp3Gumv();
        Perspective__Q34scee3Psp3Gumffff(D_001FEEF0, D_001FEEF4,
                                          D_001FEEF8, D_001FEEFC);
    }

    func_08C960();
    record = &D_001FEDB8[D_001FEE5C][D_001FEE58];
    record_scale = record->scale;
    zoom = 1.0f;
    camera = D_00329008->screen->camera;
    if (record_scale != 0.0f)
        zoom = record_scale;
    memset(&scratch.scale, 0, 12);
    scratch.scale.x = zoom;
    scratch.scale.y = zoom;
    scratch.scale.z = zoom;
    if (*(int *)((char *)D_001F3FAC + 0x20))
        scratch.scale.x *= 1.3333333f;
    Scale__Q34scee3Psp3GumPC14ScePspFVector3(&scratch.scale);

    screen = D_00329008->screen;
    func_0A0AA0(*(float *)((char *)camera + 8),
                -*(float *)((char *)camera + 12));
    length = sqrtf(model.v[8] * model.v[8] + model.v[9] * model.v[9] + model.v[10] * model.v[10]);
    func_088350(0.0f, 0.0f, 1.0f / length, screen, D_0023B7E0, 0, 0, 1, 0, 0, 0);
    func_0A53C0(0, 0, 1, 1, 0xFF0000, 0);
    if (D_001FEF30 || D_001FEF32) {
        MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType(0);
        PopMatrix__Q34scee3Psp3Gumv();
        UpdateMatrix__Q34scee3Psp3Gumv();
    }
    MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType(1);
    PopMatrix__Q34scee3Psp3Gumv();
    UpdateMatrix__Q34scee3Psp3Gumv();
    MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType(2);
    PopMatrix__Q34scee3Psp3Gumv();
    UpdateMatrix__Q34scee3Psp3Gumv();
}
