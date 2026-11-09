/* FRONTEND.REL:0x001240: reviewed 444-byte candidate, held for ABI review.
 * Waits for the buffer cache, then runs the load loop until it finishes.
 * pinned C with gnu-ee-trial links 444/444 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_0066E0 returning void with (int), but the accepted
 * FRONTEND_0066E0.c defines it returning void with no arguments.
 * It declares func_0025B0 returning int with (int), but the accepted
 * FRONTEND_0025B0.c defines it returning int with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct Cache {
    char pad0[0x34];
    unsigned char b34;
} Cache;

extern Cache *D_0010BE50;
extern char D_0010A7C0[];
extern unsigned char D_00027D60;
extern unsigned char D_00027D61;
extern unsigned char D_00027D77;
extern void (*D_00027DF8)(int);
extern int D_00027E00;

extern unsigned BufferCacheInUse__Fv(void);
extern void AllocateBufferCache__FUi(unsigned size);
extern int GetBufferCachePtr__Fv(void);
extern void ReleaseBufferCache__Fv(void);
extern void func_006850(int a, unsigned b);
extern void func_0066E0(int a);
extern int func_0011A8(int a, int b);
extern int func_0025B0(int a);
extern int func_0004D8(char *p);
extern int func_001498(void);
extern void func_001808(void);

int func_001240(int a, int b)
{
    int result;
    int f;
    int r;

    result = 0;
    if (BufferCacheInUse__Fv() == 0xFFFFFFFF) {
        AllocateBufferCache__FUi(0x200000);
    }
    while (!GetBufferCachePtr__Fv()) {
        func_006850(1, 0xFFFFFFFF);
        func_0066E0(0);
    }
    do {
        if (!D_0010BE50->b34) {
            while (!D_0010BE50->b34) {
            }
        }
        if (D_00027D61) {
            break;
        }
        if (func_0011A8(a, b)) {
            do {
                f = D_0010BE50->b34;
                r = func_0025B0(0);
                D_00027D77 = (f ^ 1) | (r != 0);
            } while (!func_0004D8(D_0010A7C0) && !D_00027D77);
            if (!D_00027D77) {
                result = func_001498();
            } else {
                func_001808();
                D_00027D61 = 0;
            }
        } else {
            if (D_00027DF8 && D_0010BE50->b34) {
                D_00027DF8(D_00027E00);
            }
            D_00027D60 = 0;
            D_00027D77 = 0;
        }
    } while (D_00027D77);
    ReleaseBufferCache__Fv();
    return result;
}
