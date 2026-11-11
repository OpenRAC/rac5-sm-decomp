/* LEVEL_23:0x11FA88 -- placement copy of LEVEL_01_12EC10.c: resolves a 0xFF sentinel in a word, then sets a context state flag. */
extern unsigned int D_001ED970;
extern int func_11FB10(void);

typedef struct Context {
    int state;
} Context;

int func_11FA88(Context *context, unsigned int *value)
{
    int result;

    if (value != 0) {
        if (*value == 0xFF)
            *value = D_001ED970;
        if (*value >= 25)
            return 0;
    }
    result = 1;
    if (context != 0) {
        unsigned int t;
        if (context->state < 0)
            context->state = func_11FB10();
        t = (unsigned int)context->state - 4;
        if (t < 2)
            return 0;
        result = 1;
    }
    return result;
}
