/* USA LEVEL_01.REL:0x0CD700. Retained C hypothesis, not a match.
 * The gnu-ee-trial profile links 1848 bytes against an 1880-byte body;
 * first difference at body byte 0. See docs/contributing/matching-blockers.md. */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef unsigned long long u64;

typedef struct { float x, y, z; } Vec3;
typedef struct { float cell[16]; } Matrix4;

extern int D_00202C48;
extern u8 D_00202C9C;
extern float D_00202CA0;
extern float D_00202C88[];
extern u32 D_00202CA8[];
extern u8 D_00202CC0, D_00202CC1, D_00202CC2;
extern float D_00202C60[];
extern float D_00202C78, D_00202C7C, D_00202C80, D_00202C84;
extern u32 D_0020B478[];
extern char D_00235140[];
extern u16 D_0023524C;
extern void *D_002313A8;
extern int D_0023B7E0;
extern char D_0032C280[];
extern void *D_0032C2C0;
extern void *D_0032C2C4;
extern void *D_0032C300;
extern float D_0032C110;
extern void *D_001F3FAC;

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
extern void func_123E80(float, Vec3 *);
extern void func_125128(Matrix4 *, Matrix4 *, Vec3 *);
extern void func_08BC10(void);
extern void func_088F98(void *, int, int, float);
extern void func_0891D8(void *);
extern void func_039B58(void *, void *);
extern void func_08BC60(void);
extern void func_038E78(void *, void *, Matrix4 *);
extern void func_03C038(int);
extern void func_039B18(void *, void *);
extern void func_08C960(void);
extern void func_0A0AA0(float, float);
extern void func_088350(int, int, float, float, float, void *, int, int, int, int, int);
extern int func_0002D8(void);
extern float sqrtf(float);
extern void *memset(void *, int, u32);

extern void MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType(int);
extern void PushMatrix__Q34scee3Psp3Gumv(void);
extern void PopMatrix__Q34scee3Psp3Gumv(void);
extern void LoadIdentity__Q34scee3Psp3Gumv(void);
extern void LoadMatrix__Q34scee3Psp3GumPC7MATRIX4(const Matrix4 *);
extern void LoadMatrix__Q34scee3Psp3GumPC14ScePspFMatrix4(const Matrix4 *);
extern void StoreMatrix__Q34scee3Psp3GumP14ScePspFMatrix4(Matrix4 *);
extern void LookAt__Q34scee3Psp3GumPC14ScePspFVector3N21(const Vec3 *, const Vec3 *, const Vec3 *);
extern void Ortho__Q34scee3Psp3Gumffffff(float, float, float, float, float, float);
extern void Perspective__Q34scee3Psp3Gumffff(float, float, float, float);
extern void Scale__Q34scee3Psp3GumPC14ScePspFVector3(const Vec3 *);
extern void UpdateMatrix__Q34scee3Psp3Gumv(void);

void func_0CD700(float camera_extent)
{
    Matrix4 matrix;
    Vec3 origin, look_at, up;
    char *scene = D_00235140;
    void *node;
    int *slots;
    u32 *colors;
    int *camera;
    int i;
    int j, index, item;
    int effect;
    char control_flag;
    char *entry, *record;
    float length;
    float scale_value;
    float t12, t13, t14;

    if (D_00202C48 == 1 || D_0032C2C4 == 0)
        return;

    func_0A0BC0(0);
    func_0A0A80(1, 1);
    func_0A0A88(0, 1);
    func_0A0A90(0, 0);
    func_0A0908(9);
    func_0A0908(4);
    func_0A0908(0);
    func_0A0BA8(6, 0, 255);
    func_0A0BC8(0, 2, 3, 0, 0);
    if (D_00202C9C) {
        func_0A1FF0(1, 0, 1);
        func_0A2110(1, 1);
        func_0A2468(1);
        func_0A2618(1);
        func_0A53C0(240, 0, 240, 272, 0xff0000, 0);
        func_0A2110(1, 2);
    }

    MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType(2);
    PushMatrix__Q34scee3Psp3Gumv();
    D_00202CA0 += 0.025f;
    matrix = *(Matrix4 *)D_0032C280;
    func_123E80(camera_extent, &origin);
    func_125128(&matrix, &matrix, &origin);
    t12 = D_00202C88[0];
    t14 = D_00202C88[2];
    t13 = D_00202C88[1];
    matrix.cell[12] = t12;
    matrix.cell[14] = t14;
    matrix.cell[13] = t13;

    LoadMatrix__Q34scee3Psp3GumPC7MATRIX4(&matrix);
    func_08BC10();
    func_088F98(&D_0032C300, 0, 0, 0.033333335f);
    func_0891D8(&D_0032C300);
    func_039B58(scene, *(void **)(scene + 0x59c));
    func_08BC60();
    func_038E78(scene, *(void **)(scene + 0x59c), &matrix);

    control_flag = *(char *)((char *)D_002313A8 + 0x2e0);
    effect = D_0023B7E0;
    if (control_flag == 0) {
        *(u64 *)(scene + 0x960) &= 0xfffbffffffffffffULL;
        i = 0;
        *(u16 *)((char *)(*(void **)(scene + 0x59c)) + 0x74) = *(u16 *)(scene + 0x10c);
        func_03C038(1);
        slots = (int *)(scene + 0x5b8);
        colors = D_00202CA8;
        do {
            if (*slots != 0) {
                func_039B18((void *)*slots, scene);
                *colors = D_0023B7E0;
            }
            i++;
            colors++;
            slots++;
        } while ((u32)i < 6);
    } else {
        *(u16 *)((char *)D_0032C2C0 + 0x74) = 0;
    }

    MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType(1);
    PushMatrix__Q34scee3Psp3Gumv();
    LoadIdentity__Q34scee3Psp3Gumv();
    origin.x = 0.0f; origin.y = 0.0f; origin.z = 4.0f;
    look_at.x = 0.0f; look_at.y = 0.0f; look_at.z = 0.0f;
    up.x = 0.0f; up.y = 1.0f; up.z = 0.0f;
    LookAt__Q34scee3Psp3GumPC14ScePspFVector3N21(&origin, &look_at, &up);

    if (D_00202CC0) {
        MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType(0);
        PushMatrix__Q34scee3Psp3Gumv();
        LoadIdentity__Q34scee3Psp3Gumv();
        if (D_00202CC1)
            Ortho__Q34scee3Psp3Gumffffff(D_00202C60[0], D_00202C60[1],
                                         D_00202C60[2], D_00202C60[3],
                                         D_00202C60[4], D_00202C60[5]);
        StoreMatrix__Q34scee3Psp3GumP14ScePspFMatrix4((Matrix4 *)D_0032C280 - 1);
    }
    if (D_00202CC2 && !D_00202CC0) {
        MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType(0);
        PushMatrix__Q34scee3Psp3Gumv();
        LoadIdentity__Q34scee3Psp3Gumv();
        Perspective__Q34scee3Psp3Gumffff(D_00202C78, D_00202C7C,
                                          D_00202C80, D_00202C84);
    }
    func_08C960();

    node = D_0032C2C4;
    scale_value = D_0032C110;
    camera = (int *)((char *)(*(void **)((char *)node + 4)) + 0x1c);
    memset(&origin, 0, sizeof(origin));
    origin.x = origin.y = origin.z = scale_value;
    if (*(int *)((char *)D_001F3FAC + 0x20))
        origin.x = scale_value * 1.3333333f;
    Scale__Q34scee3Psp3GumPC14ScePspFVector3(&origin);
    func_0A0AA0(*(float *)((char *)camera + 8), -*(float *)((char *)camera + 12));
    length = sqrtf(matrix.cell[8] * matrix.cell[8] +
                   matrix.cell[9] * matrix.cell[9] +
                   matrix.cell[10] * matrix.cell[10]);
    func_088350(0, 0, 0.0f, 0.0f, 1.0f / length,
                *(void **)((char *)node + 4), effect, 0,
                *(u16 *)((char *)D_0032C2C0 + 0x74), 1, 0);
    MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType(2);

    if (*(char *)((char *)D_002313A8 + 0x2e0) == 0) {
        slots = (int *)(scene + 0x5b8);
        for (i = 0; i < 6; i++) {
            item = slots[i];
            if (!item)
                continue;
            index = func_0002D8();
            entry = *(char **)(*(char **)(item + 0x40) + 4);
            for (j = 0; j < 8; j++) {
                record = entry + j * 0x34;
                if (*(int *)(record + 0x20) == D_0020B478[index]) {
                    LoadMatrix__Q34scee3Psp3GumPC14ScePspFMatrix4((Matrix4 *)0);
                    length = sqrtf(*(float *)(item + 0x20) * *(float *)(item + 0x20) +
                                   *(float *)(item + 0x24) * *(float *)(item + 0x24) +
                                   *(float *)(item + 0x28) * *(float *)(item + 0x28));
                    func_088350(j, j, 0.0f, 0.0f, 1.0f / length,
                                *(void **)(record + 4), D_00202CA8[i], 0,
                                0, 1, 0);
                    break;
                }
            }
        }
    }
    func_0A53C0(0, 0, 1, 1, 0xff0000, 0);
    if (D_00202CC0 || D_00202CC2) {
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
