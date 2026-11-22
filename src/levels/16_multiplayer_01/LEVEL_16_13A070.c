/* LEVEL_16:0x13A070 -- placement copy of LEVEL_01_15DA38.c: footstep trail of the object: resets the shared counter when the epoch changes, claims the trail owner slot, runs the per-frame hook and, while the object is idle (flag bits 6 clear), emits a trail mark (up to four per epoch) once it has moved at least 0.3 units from the last mark; the owner slot is released when the object turns active or the fourth mark is placed. */
struct Mat4;

typedef struct {
    float x;
    float y;
    float z;
} Vec3;

extern int D_001A1AE4;
extern int D_001BD758;
extern unsigned int D_001BD754;
extern char *D_001BD750;
extern char D_001D2260[];
extern char D_001D2230[];
extern char D_001D22C8[];

extern int func_1885E0(float f, char *object, char *state, char *table);
extern void func_1044F0(Vec3 *dst, struct Mat4 *mat, Vec3 *v);
extern void func_0D74A8(Vec3 *v, char *table);

static __inline__ void Copy3(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
}

void func_13A070(char *object)
{
    char *state;
    float *cur;
    float *old;
    float dx;
    float dy;
    float dz;
    Vec3 v;

    if (D_001BD758 != D_001A1AE4) {
        D_001BD758 = D_001A1AE4;
        D_001BD754 = 0;
    }
    if (D_001BD750 == 0) {
        D_001BD750 = object;
    }
    state = *(char **)(object + 0x58);
    func_1885E0(*(float *)(state + 0x30), object, state, D_001D2260);
    if ((*(unsigned int *)(object + 0x64) & 6) != 0) {
        if (D_001BD750 == object) {
            D_001BD750 = 0;
        }
    } else if (D_001BD754 < 4) {
        old = (float *)(state + 0x24);
        cur = (float *)(object + 0x30);
        dx = cur[0] - old[0];
        dy = cur[1] - old[1];
        dz = cur[2] - old[2];
        if (0.09f <= dx * dx + dy * dy + dz * dz) {
            Copy3(old, cur);
            func_1044F0(&v, (struct Mat4 *)object, (Vec3 *)(D_001D2230 + *(unsigned char *)(object + 0x44) * 0xC));
            func_0D74A8(&v, D_001D22C8);
            D_001BD754 = D_001BD754 + 1;
            if (D_001BD754 == 4) {
                D_001BD750 = 0;
            }
        }
    }
}
