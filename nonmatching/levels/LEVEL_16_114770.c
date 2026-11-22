/* USA LEVEL_16.REL:0x114770, 400-byte candidate (21 November 2026).
 * Measured pinned --as: 4 differing words; first difference at 0x88.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef unsigned char u8;

typedef struct {
    int obj;
    int state;
    float timer;
    char pad0C[0x14];
} Slot114770;

extern Slot114770 D_002DF608[];
extern char D_002DF968[];
extern int D_001B8320;

extern int func_112CE8(int a);
extern char *func_10F330(int id);
extern char *strcpy(char *dst, const char *src);
extern void func_097540(int a, int b);
extern void func_097360(unsigned int v);
extern void func_099138(short x, short y, const u8 *text,
                          float scale_x, float scale_y);

void func_114770(int a)
{
    int obj;
    int n;
    unsigned int i;
    Slot114770 *s;

    obj = func_112CE8(a);
    if (obj == 0)
        return;
    s = 0;
    for (i = 0; i < 4; i++) {
        if (D_002DF608[i].obj == obj) {
            s = &D_002DF608[i];
            break;
        }
    }
    if (s == 0 || (s->state ^ 2) != 0)
        return;
    n = (int)(4.0f - s->timer) + 1;
    if (n != D_001B8320) {
        if (n == 4) {
            strcpy(D_002DF968, func_10F330(0x676));
        } else if (n == 3) {
            strcpy(D_002DF968, func_10F330(0x677));
        } else if (n == 2) {
            strcpy(D_002DF968, func_10F330(0x678));
        } else if (n == 1) {
            strcpy(D_002DF968, func_10F330(0x679));
        }
        D_001B8320 = n;
    }
    func_097540(a, 0);
    func_097360(0xFF00FFFF);
    func_099138(0xF0, 0x74, D_002DF968, 1.0f, 1.0f);
    func_097360(0xFFFFFFFF);
}
