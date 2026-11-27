/* LEVEL_22:0x13E3C0 -- placement copy of LEVEL_01_1D1BD0.c: builds a header and tail on the stack, then calls a helper with the strength as an int. */
extern char D_002E8620[];
extern int D_00166BA4;
extern void func_0CDE88(int *, int *, int, float, float);

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

void func_13E3C0(float strength, int code)
{
    struct Header header;
    struct Tail tail;
    header.constant = 0.0872664675116539f;
    header.code = code;
    tail.zero = 0;
    header.data = D_002E8620;
    header.fraction = 0.25f;
    tail.global = D_00166BA4;
    func_0CDE88(&tail.global, &header.code, (int)strength, 0.0f, 0.0f);
}
