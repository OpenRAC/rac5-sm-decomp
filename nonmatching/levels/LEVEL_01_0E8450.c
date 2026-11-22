/* USA LEVEL_01.REL:0x0E8450, 204-byte candidate (21 November 2026).
 * Measured sdk991111: 28 differing words; first difference at 0x4.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    float x, y, z;
} V3;

typedef struct {
    char pad00[0x0A];
    unsigned char flags;
    char pad0B[5];
} Request;

extern void func_0E8118(Request *req, int a, int b, unsigned int c);
extern int func_096C60(Request *req);
extern void func_0E81D8(int a0, V3 *pos, V3 *dir, unsigned int a3, unsigned int t0, unsigned int t1, unsigned int t2, float f1, float f2);

void func_0E8450(int a0, V3 *pos, V3 *dir, unsigned int a3, unsigned int t0, unsigned int t1, unsigned int t2, unsigned int t3, float f1, float f2, int extra)
{
    Request req;
    int id;

    func_0E8118(&req, a0, extra, t3);
    req.flags |= 1;
    id = func_096C60(&req);
    if (id != -1) {
        func_0E81D8(id, pos, dir, a3, t0, t1, t2, f1, f2);
    }
}
