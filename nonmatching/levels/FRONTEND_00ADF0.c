/* USA FRONTEND:00ADF0, 252-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: default.
 * Compiled 252 bytes: 2 differing words; first difference +0x68. No matching credit.
 * Remaining issue: store order: inline SetXY(m, x, y) writing y first fixes the old f1/f2 swap
 * (4 -> 2 words); left: sched puts the view[15] store (REG_DEAD of 1.0) ahead of the two
 * translation stores (retail 30,34,3C; ours 3C,34,30); 1080 store orders + accepted sched flags
 * measured
 * Reopen only when new caller/type evidence or a source hypothesis resolves this measured
 * difference without changing accepted bytes.
 */

/* FRONTEND:0x00ADF0 -- draws the screen fade quad: when the fade state is active, sets up a screen-space matrix and fills the full screen with the fade colour. */
typedef struct Fade {
    char pad_00[8];
    unsigned int alpha;
    unsigned int rgb;
    char pad_10[5];
    unsigned char active;
} Fade;

extern void *memset(void *p, int c, unsigned int n);
extern void func_00BC68(void);
extern void func_00C050(void);
extern void func_006120(int mode);
extern void func_0062A0(float *m);
extern void func_006200(float *m);
extern void func_006320(void);
extern void func_00A150(int, int, int, int, unsigned int, unsigned int);


static __inline__ void SetXY(float *m, float x, float y)
{
    m[13] = y;
    m[12] = x;
}

void func_00ADF0(Fade *f)
{
    float view[16];
    float proj[16];
    if (f->alpha != 0) {
        if (f->active != 0) {
            func_00BC68();
            func_00C050();
            memset(view, 0, sizeof(view));
            view[0] = 1.0f;
            view[5] = 1.0f;
            view[10] = 1.0f;
            view[15] = 1.0f;
            SetXY(view, 1792.0f, 1840.0f);
            func_006120(5);
            func_0062A0(proj);
            func_006200(view);
            func_006320();
            func_00A150(0, 0, 0x200, 0x1A0, (f->rgb & 0xFFFFFF) | (f->alpha << 24), 0xFFFFFF);
            func_006200(proj);
            func_006320();
        }
    }
}
