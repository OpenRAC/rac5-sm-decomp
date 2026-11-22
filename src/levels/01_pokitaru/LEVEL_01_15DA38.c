/* LEVEL_01:0x15DA38 -- footstep trail of the object: resets the shared counter when the epoch changes, claims the trail owner slot, runs the per-frame hook and, while the object is idle (flag bits 6 clear), emits a trail mark (up to four per epoch) once it has moved at least 0.3 units from the last mark; the owner slot is released when the object turns active or the fourth mark is placed. */
struct Mat4;

typedef struct {
    float x;
    float y;
    float z;
} Vec3;

extern int D_001F3FB8;
extern int D_002074B8;
extern unsigned int D_002074B4;
extern char *D_002074B0;
extern char D_0021EDD0[];
extern char D_0021EDA0[];
extern char D_0021EE38[];

extern int func_1CFF28(float f, char *object, char *state, char *table);
extern void func_125E78(Vec3 *dst, struct Mat4 *mat, Vec3 *v);
extern void func_0E8520(Vec3 *v, char *table);

static __inline__ void Copy3(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
}

void func_15DA38(char *object)
{
    char *state;
    float *cur;
    float *old;
    float dx;
    float dy;
    float dz;
    Vec3 v;

    if (D_002074B8 != D_001F3FB8) {
        D_002074B8 = D_001F3FB8;
        D_002074B4 = 0;
    }
    if (D_002074B0 == 0) {
        D_002074B0 = object;
    }
    state = *(char **)(object + 0x58);
    func_1CFF28(*(float *)(state + 0x30), object, state, D_0021EDD0);
    if ((*(unsigned int *)(object + 0x64) & 6) != 0) {
        if (D_002074B0 == object) {
            D_002074B0 = 0;
        }
    } else if (D_002074B4 < 4) {
        old = (float *)(state + 0x24);
        cur = (float *)(object + 0x30);
        dx = cur[0] - old[0];
        dy = cur[1] - old[1];
        dz = cur[2] - old[2];
        if (0.09f <= dx * dx + dy * dy + dz * dz) {
            Copy3(old, cur);
            func_125E78(&v, (struct Mat4 *)object, (Vec3 *)(D_0021EDA0 + *(unsigned char *)(object + 0x44) * 0xC));
            func_0E8520(&v, D_0021EE38);
            D_002074B4 = D_002074B4 + 1;
            if (D_002074B4 == 4) {
                D_002074B0 = 0;
            }
        }
    }
}
