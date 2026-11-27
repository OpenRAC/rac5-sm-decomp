/* LEVEL_05:0x1C0FC8 -- placement copy of LEVEL_01_1D1BD0.c: builds a header and tail on the stack, then calls a helper with the strength as an int. */
extern char D_0038FF20[];
extern int D_001F8088;
extern void func_0DFEF8(int *, int *, int, float, float);

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

void func_1C0FC8(float strength, int code)
{
    struct Header header;
    struct Tail tail;
    header.constant = 0.0872664675116539f;
    header.code = code;
    tail.zero = 0;
    header.data = D_0038FF20;
    header.fraction = 0.25f;
    tail.global = D_001F8088;
    func_0DFEF8(&tail.global, &header.code, (int)strength, 0.0f, 0.0f);
}
