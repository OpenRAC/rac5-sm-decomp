/* LEVEL_01.REL:0x1D1BD0: Ghidra body 108 bytes.
 * Pinned pure C links 112 bytes and first differs at +12.
 * Recheck the verified float/float/pointer/pointer/int call schedule and packet stores. No matching credit.
 */
extern char D_00398B90[];
extern int D_00209110;
extern void func_0E2318(float, float, int *, int *, int);

struct Header {
    int code;
    float constant;
    float fraction;
    void *data;
};

struct Tail {
    int global;
    int zero;
};

void func_1D1BD0(float strength, int code)
{
    struct Header header;
    struct Tail tail;
    header.constant = 0.0872664675116539f;
    header.data = D_00398B90;
    header.fraction = 0.25f;
    tail.global = D_00209110;
    tail.zero = 0;
    header.code = code;
    func_0E2318(0.0f, 0.0f, &tail.global, &header.code, (int)strength);
}
