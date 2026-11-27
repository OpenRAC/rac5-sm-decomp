/* LEVEL_06:0x1BF418 -- placement copy of LEVEL_01_1D1BD0.c: builds a header and tail on the stack, then calls a helper with the strength as an int. */
extern char D_003855A0[];
extern int D_001F7FC8;
extern void func_0DCC18(int *, int *, int, float, float);

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

void func_1BF418(float strength, int code)
{
    struct Header header;
    struct Tail tail;
    header.constant = 0.0872664675116539f;
    header.code = code;
    tail.zero = 0;
    header.data = D_003855A0;
    header.fraction = 0.25f;
    tail.global = D_001F7FC8;
    func_0DCC18(&tail.global, &header.code, (int)strength, 0.0f, 0.0f);
}
