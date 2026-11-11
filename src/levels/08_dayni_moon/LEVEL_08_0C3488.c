/* Provisional progress-panel drawing shared across level modules. */
typedef unsigned int u32;

typedef struct {
    short x;
    short pad_02;
    unsigned short y;
    short pad_06;
    unsigned short right;
    short pad_0a;
    unsigned short bottom;
    short pad_0e;
} UiRect;

typedef struct {
    char unused[0x970];
    float progress;
} UiManager;

typedef struct {
    char unused[0x18];
    u32 field_18;
} PanelInput;

extern float D_002456C0[];
extern float D_002456B8[];
extern int D_00245688[];
extern char D_0025BDE8[];
extern char D_0025BDD8[];
extern UiManager D_002843D0;

extern void *func_0BFC40(int kind);
extern void func_0B37B8(int index, void *value);
extern void func_0B93E0(int id, u32 color, float zero);
extern int func_0B9040(int id, void *out, float zero);
extern void func_0B9D38(int id, int a, int b, int c, u32 field,
                        float x, float y, float z, float w);
extern void func_0B6DE8(int x, int y, int right, int bottom, u32 color);
extern float ceilf(float value);
extern int func_0B2FD8(const void *rect);
extern void func_0B6E78(float xscale, float yscale,
                        int x, int y, int right, int bottom,
                        u32 c0, u32 c1, u32 c2, u32 c3, float zero);
extern void func_0B35D8(u32 value);
extern int sprintf(char *dst, const char *format, ...);
extern int func_0B2F78(const void *rect);
extern void func_0B5380(int x, int bottom, char *text, float sx, float sy);
extern void func_0B50C8(int x, int bottom, char *text);
extern void func_0B57D8(int x, int bottom, char *text);

void func_0C3488(int index, const PanelInput *input)
{
    UiRect rect;
    char text[64];
    UiManager *manager;
    float initial_zero = 0.0f;
    float one;
    float draw_zero;
    int current;
    int total;
    int filled;
    float ratio;

    func_0B37B8(index, func_0BFC40(2));
    func_0B93E0(0x0d, 0xffffffffu, initial_zero);
    func_0B93E0(0x0e, 0xffffffffu, initial_zero);
    func_0B9040(0x44, &rect, initial_zero);
    func_0B9D38(0x44, 0, 0, 0, input->field_18,
                 1.0f, 1.0f, initial_zero, initial_zero);

    func_0B6DE8((short)((unsigned short)rect.x - 1),
                 (short)(rect.y - 2),
                 (short)(rect.right + 1),
                 (short)(rect.bottom + 1), 0xa0202020u);
    func_0B6DE8(rect.x, (short)rect.y, (short)rect.right,
                 (short)rect.bottom, 0xff000000u);

    current = (int)ceilf(D_002456C0[index]);
    total = (int)ceilf(D_002456B8[index]);
    ratio = (float)(u32)current / (float)(u32)total;
    one = 1.0f;
    if (ratio > one)
        ratio = one;
    draw_zero = 0.0f;
    filled = (int)(ratio * (float)(func_0B2FD8(&rect) - 2));
    if (D_002456C0[index] > draw_zero && filled < 2)
        filled = 2;

    func_0B6E78(one, one,
                 (short)((unsigned short)rect.x + 1), (short)rect.y,
                 (short)((unsigned short)rect.x + filled), (short)rect.bottom,
                 0xff09a5d0u, 0xff1c35ffu, 0xff09a5d0u, 0xff1c35ffu, draw_zero);
    if (D_002456B8[index] < 100.0f)
        func_0B6DE8((short)((unsigned short)rect.x + filled),
                     (short)rect.y, (short)rect.right,
                     (short)rect.bottom, 0x20000000u);

    func_0B9040(0x45, &rect, draw_zero);
    manager = &D_002843D0;
    func_0B35D8(input->field_18);
    if (manager) {
        sprintf(text, D_0025BDE8, current, total);
        if (manager->progress >= 100.0f)
            func_0B5380((short)func_0B2F78(&rect), (short)rect.bottom,
                         text, 0.9f, 0.9f);
        else
            func_0B50C8((short)func_0B2F78(&rect), (short)rect.bottom, text);
    }
    func_0B9040(0x46, &rect, draw_zero);
    if (manager) {
        sprintf(text, D_0025BDD8, D_00245688[index]);
        func_0B57D8((short)rect.right, (short)rect.bottom, text);
    }
}
